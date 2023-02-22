function L=lp(n,x)
sum=0;
for m=0:n/2
den=factorial(m)*factorial(n-m)*(2^n)* factorial(n-2*m);
sum=sum+((-1)^m)*factorial(2*n-2*m)*(x.^(n-2*m))/den;
end
L=sum;
endfunction
x=-1:0.01:8
for n=0:6
//subplot(2,2,n)
//disp(lp(n,x))
plot2d(x,lp(n,x),n,rect=[-1 -1 1 1])
xgrid(1)
hl=legend(['P0(x)';'P1(x)';'P2(x)';'P3(x)';'P4(x)';'P5(x)';'P6(x)']);
end
