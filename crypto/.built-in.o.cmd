cmd_crypto/built-in.o :=  /opt/freescale/usr/local/gcc-4.4.4-glibc-2.11.1-multilib-1.0/arm-fsl-linux-gnueabi/bin/arm-none-linux-gnueabi-ld -EL    -r -o crypto/built-in.o crypto/crypto.o crypto/crypto_wq.o crypto/crypto_algapi.o crypto/aead.o crypto/crypto_blkcipher.o crypto/chainiv.o crypto/eseqiv.o crypto/seqiv.o crypto/crypto_hash.o crypto/pcompress.o crypto/cryptomgr.o crypto/gf128mul.o crypto/ecb.o crypto/cbc.o crypto/pcbc.o crypto/cts.o crypto/lrw.o crypto/xts.o crypto/ctr.o crypto/gcm.o crypto/ccm.o crypto/des_generic.o crypto/aes_generic.o crypto/arc4.o crypto/deflate.o crypto/michael_mic.o crypto/authenc.o crypto/authencesn.o crypto/lzo.o crypto/rng.o crypto/krng.o crypto/ghash-generic.o 
