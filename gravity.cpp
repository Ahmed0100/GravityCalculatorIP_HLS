float gravity(float m1,float m2,float dst)
{
#pragma HLS INTERFACE s_axilite port=return bundle=CRTLS
#pragma HLS INTERFACE s_axilite port=m1 bundle=CRTLS
#pragma HLS INTERFACE s_axilite port=m2 bundle=CRTLS
#pragma HLS INTERFACE s_axilite port=dst bundle=CRTLS

	float force=0;
	float dstSquare=0;
	if(dst == 0)
		dstSquare = 0.000001f;
	else
		dstSquare = dst*dst;
	force = (10*m1*m2)/dstSquare;
	return force;
}
