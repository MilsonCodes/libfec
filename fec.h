/* User include file for libfec
 * Copyright 2004, Phil Karn, KA9Q
 * May be used under the terms of the GNU Lesser General Public License (LGPL)
 */

#ifndef _FEC_H_
#define _FEC_H_

/* r=1/2 k=7 convolutional encoder polynomials */
#define	V27POLYA	0x6d
#define	V27POLYB	0x4f

void *create_viterbi27(int len);
int init_viterbi27(void *vp,int starting_state);
int update_viterbi27_blk(void *vp,unsigned char sym[],int npairs);
int chainback_viterbi27(void *vp, unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi27(void *vp);

#ifdef __VEC__
void *create_viterbi27_av(int len);
int init_viterbi27_av(void *p,int starting_state);
int chainback_viterbi27_av(void *p,unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi27_av(void *p);
int update_viterbi27_blk_av(void *p,unsigned char *syms,int nbits);
#endif

#ifdef __i386__
void *create_viterbi27_mmx(int len);
int init_viterbi27_mmx(void *p,int starting_state);
int chainback_viterbi27_mmx(void *p,unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi27_mmx(void *p);
int update_viterbi27_blk_mmx(void *p,unsigned char *syms,int nbits);

void *create_viterbi27_sse(int len);
int init_viterbi27_sse(void *p,int starting_state);
int chainback_viterbi27_sse(void *p,unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi27_sse(void *p);
int update_viterbi27_blk_sse(void *p,unsigned char *syms,int nbits);

void *create_viterbi27_sse2(int len);
int init_viterbi27_sse2(void *p,int starting_state);
int chainback_viterbi27_sse2(void *p,unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi27_sse2(void *p);
int update_viterbi27_blk_sse2(void *p,unsigned char *syms,int nbits);
#endif

void *create_viterbi27_port(int len);
int init_viterbi27_port(void *p,int starting_state);
int chainback_viterbi27_port(void *p,unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi27_port(void *p);
int update_viterbi27_blk_port(void *p,unsigned char *syms,int nbits);

/* r=1/2 k=9 convolutional encoder polynomials */
#define	V29POLYA	0x1af
#define	V29POLYB	0x11d

void *create_viterbi29(int len);
int init_viterbi29(void *vp,int starting_state);
int update_viterbi29_blk(void *vp,unsigned char syms[],int nbits);
int chainback_viterbi29(void *vp, unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi29(void *vp);

#ifdef __VEC__
void *create_viterbi29_av(int len);
int init_viterbi29_av(void *p,int starting_state);
int chainback_viterbi29_av(void *p,unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi29_av(void *p);
int update_viterbi29_blk_av(void *p,unsigned char *syms,int nbits);
#endif

#ifdef __i386__
void *create_viterbi29_mmx(int len);
int init_viterbi29_mmx(void *p,int starting_state);
int chainback_viterbi29_mmx(void *p,unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi29_mmx(void *p);
int update_viterbi29_blk_mmx(void *p,unsigned char *syms,int nbits);

void *create_viterbi29_sse(int len);
int init_viterbi29_sse(void *p,int starting_state);
int chainback_viterbi29_sse(void *p,unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi29_sse(void *p);
int update_viterbi29_blk_sse(void *p,unsigned char *syms,int nbits);

void *create_viterbi29_sse2(int len);
int init_viterbi29_sse2(void *p,int starting_state);
int chainback_viterbi29_sse2(void *p,unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi29_sse2(void *p);
int update_viterbi29_blk_sse2(void *p,unsigned char *syms,int nbits);
#endif

void *create_viterbi29_port(int len);
int init_viterbi29_port(void *p,int starting_state);
int chainback_viterbi29_port(void *p,unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi29_port(void *p);
int update_viterbi29_blk_port(void *p,unsigned char *syms,int nbits);


/* r=1/6 k=15 Cassini convolutional encoder polynomials
 * dfree = 56
 * These bits may be left-right flipped from some textbook representations;
 * here I have the bits entering the shift register from the right (low) end
 */
#define	V615POLYA	042631
#define	V615POLYB	047245
#define V615POLYC       056507
#define V615POLYD       073363
#define V615POLYE       077267
#define V615POLYF       064537

void *create_viterbi615(int len);
int init_viterbi615(void *vp,int starting_state);
int update_viterbi615_blk(void *vp,unsigned char *syms,int nbits);
int chainback_viterbi615(void *vp, unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi615(void *vp);

#ifdef __VEC__
void *create_viterbi615_av(int len);
int init_viterbi615_av(void *p,int starting_state);
int chainback_viterbi615_av(void *p,unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi615_av(void *p);
int update_viterbi615_blk_av(void *p,unsigned char *syms,int nbits);
#endif

#ifdef __i386__
void *create_viterbi615_mmx(int len);
int init_viterbi615_mmx(void *p,int starting_state);
int chainback_viterbi615_mmx(void *p,unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi615_mmx(void *p);
int update_viterbi615_blk_mmx(void *p,unsigned char *syms,int nbits);

void *create_viterbi615_sse(int len);
int init_viterbi615_sse(void *p,int starting_state);
int chainback_viterbi615_sse(void *p,unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi615_sse(void *p);
int update_viterbi615_blk_sse(void *p,unsigned char *syms,int nbits);

void *create_viterbi615_sse2(int len);
int init_viterbi615_sse2(void *p,int starting_state);
int chainback_viterbi615_sse2(void *p,unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi615_sse2(void *p);
int update_viterbi615_blk_sse2(void *p,unsigned char *syms,int nbits);

#endif

void *create_viterbi615_port(int len);
int init_viterbi615_port(void *p,int starting_state);
int chainback_viterbi615_port(void *p,unsigned char *data,unsigned int nbits,unsigned int endstate);
void delete_viterbi615_port(void *p);
int update_viterbi615_blk_port(void *p,unsigned char *syms,int nbits);


/* General purpose RS codec, 8-bit symbols */
void encode_rs_char(void *rs,unsigned char *data,unsigned char *parity);
int decode_rs_char(void *rs,unsigned char *data,int *eras_pos,
		   int no_eras);
void *init_rs_char(int symsize,int gfpoly,
		   int fcr,int prim,int nroots,
		   int pad);
void free_rs_char(void *rs);

/* General purpose RS codec, integer symbols */
void encode_rs_int(void *rs,int *data,int *parity);
int decode_rs_int(void *rs,int *data,int *eras_pos,int no_eras);
void *init_rs_int(int symsize,int gfpoly,int fcr,
		  int prim,int nroots,int pad);
void free_rs_int(void *rs);

/* CCSDS standard (255,223) RS codec with conventional (*not* dual-basis)
 * symbol representation
 */
void encode_rs_8(unsigned char *data,unsigned char *parity,int pad);
int decode_rs_8(unsigned char *data,int *eras_pos,int no_eras,int pad);

/* CCSDS standard (255,223) RS codec with dual-basis symbol representation */
void encode_rs_ccsds(unsigned char *data,unsigned char *parity,int pad);
int decode_rs_ccsds(unsigned char *data,int *eras_pos,int no_eras,int pad);

/* Tables to map from conventional->dual (Taltab) and
 * dual->conventional (Tal1tab) bases
 */
extern unsigned char Taltab[],Tal1tab[];

#endif /* _FEC_H_ */