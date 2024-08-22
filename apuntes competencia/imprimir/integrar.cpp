static double simpson2(double a, double b, double del, int step, int maxstep) {
double h = b-a;
double c = (b+a)/2;
double fa = f(a);
double fc = f(c);
double fb = f(b);
double s0 = h*(fa+4*fc+fb)/6;
double s1 = h*(fa+4*f(a+h/4)+2*fc + 4*f(a+3*h/4)+fb)/12;
step++;
 if (step >= maxstep) {
 System.out.println ("Not converged after " + step + " recursions");
 return s1;
 } else {
 if (Math.abs(s1-s0) < 15*del)
 return s1;
 else
 return simpson2(a, c, del/2, step, maxstep) +
 simpson2(c, b, del/2, step, maxstep);
 }
 }
 static double monte(int steps) {
 Random r = new Random(); double s0 = 0; double ds = 0;
 for (int i=0; i<steps; ++i) {
 double x = r.nextDouble();
 s0 += f(x); ds += f(x)*f(x);
 }
 s0 /= steps; ds /= steps;
 ds = Math.sqrt(Math.abs(ds-s0*s0)/steps); // error
 return s0;
 }
 static double f(double x) { ... }