	program elasticl1s1s
	USE MSIMSLMS
	! ----------------------------------------------------------------!
	!Ce program calcule la SED non relativiste de l'excitation de 		  !
	!l'hydrogène atomique de (1s1/2--------->2p0) 
	!-----------------------------------------------------------------!
      implicit integer (i-n)
	implicit real*8 (a-h,o-y)

!	open(6,file='SEDnonre1s2p.dat', status='unknown')
	open(7,file='SEDNonre1s1s.dat', status='unknown')
!--------------------Input parameters-----------------------------------
!	gam=1.0053251  !E=100ev
!	gam=1.0106502  !E=200ev
!	gam=1.015975   !E=300ev  
		
!	  do 201 igam=10053,10160
!	  gam=float(igam)/10000
!------------------------------------------------------------------
	    pi=4.0*atan(1.0)
	     c=137.036
!	      alfa=1./137.036
      	evua=27.2116
!-----------------------------------------------------------------
!     on lit l'energie cinétique initiale:(on peut travailler avec la boucle)
!-----------------------------------------------------------------
!	  Eci=300./evua
!	  Eci=200./evua
	  Eci=500./evua
	   gam=Eci/c**2+1.

!	print*,gei
!------Les impulsions initiale et finale non relativiste (Normes)
	    pinr=sqrt(2.0*Eci)
!	      pinr=c*sqrt(gam**2-1.)
!	      pinr=sqrt(2.0*gei)
	      pfnr=pinr
!	 print*,gei/c**2+1.  
!     La boucle sur l'angle et SED
      
      
!	print*,pinr,pfnr
	  do 200 itetaf=-90,90	 
	     
	   adtf=float(itetaf)
!---------angle tetaf en degrés-------------
	           apipf=adtf*pi/180.  !pi---->180
								   !T(rad)--->T(deg)       
!	print*,apipf,adtf
!      Transfert d'impulsion
!	deltanr=sqrt(pinr**2+pfnr**2-2.*pinr*pfnr*cos(apipf))

!	 delta 1s1s
	delt1s=2.*pinr*sin(apipf/2.)
!----------------SED non relativiste 1S1S---------------------------
 	  sed1S=4.*(delt1s**2+8.)**2/(delt1s**2+4.)**4

!----------------SED non relativiste 1S2P---------------------------
!	  termsp=288./(deltanr**2*(deltanr**2+9./4.)**6)
!	  sednr=(pfnr/pinr)*termsp
	 
!	print*,sednr,sed1S
!----------------SE totale non relativiste 1S2P---------------------
!	  print*,segma,pinr
!	print*,gam,(gei-c**2),segma

!-------------------------------------------------------------------
!  	 write(6,54) adtf,sednr	       
! 54   format(2(e14.6,1x))	
 
  	 write(7,55) adtf,sed1S	       
 55   format(2(e14.6,1x))					    	 
 					    	 
200	  continue

!        segma=576.*pi*log(pinr)/pinr**2

!  	 write(7,55) (gei-c**2),segma	       
! 55   format(2(e14.6,1x))

!201	  continue
!	close(6)
	close(7)


	stop

 	end
