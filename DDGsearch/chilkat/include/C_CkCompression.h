// This is a generated source file for Chilkat version 9.5.0.83
#ifndef _C_CkCompression_H
#define _C_CkCompression_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkCompression_setAbortCheck(HCkCompression cHandle, BOOL (*fnAbortCheck)(void));
CK_C_VISIBLE_PUBLIC void CkCompression_setPercentDone(HCkCompression cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_C_VISIBLE_PUBLIC void CkCompression_setProgressInfo(HCkCompression cHandle, void (*fnProgressInfo)(const char *name, const char *value));
CK_C_VISIBLE_PUBLIC void CkCompression_setTaskCompleted(HCkCompression cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_C_VISIBLE_PUBLIC void CkCompression_setAbortCheck2(HCkCompression cHandle, BOOL (*fnAbortCheck2)(void *pContext));
CK_C_VISIBLE_PUBLIC void CkCompression_setPercentDone2(HCkCompression cHandle, BOOL (*fnPercentDone2)(int pctDone, void *pContext));
CK_C_VISIBLE_PUBLIC void CkCompression_setProgressInfo2(HCkCompression cHandle, void (*fnProgressInfo2)(const char *name, const char *value, void *pContext));
CK_C_VISIBLE_PUBLIC void CkCompression_setTaskCompleted2(HCkCompression cHandle, void (*fnTaskCompleted2)(HCkTask hTask, void *pContext));

// setExternalProgress is for C callback functions defined in the external programming language (such as Go)
CK_C_VISIBLE_PUBLIC void CkCompression_setExternalProgress(HCkCompression cHandle, BOOL on);
CK_C_VISIBLE_PUBLIC void CkCompression_setCallbackContext(HCkCompression cHandle, void *pContext);

CK_C_VISIBLE_PUBLIC HCkCompression CkCompression_Create(void);
CK_C_VISIBLE_PUBLIC void CkCompression_Dispose(HCkCompression handle);
CK_C_VISIBLE_PUBLIC void CkCompression_getAlgorithm(HCkCompression cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkCompression_putAlgorithm(HCkCompression cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkCompression_algorithm(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC void CkCompression_getCharset(HCkCompression cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkCompression_putCharset(HCkCompression cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkCompression_charset(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC void CkCompression_getDebugLogFilePath(HCkCompression cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkCompression_putDebugLogFilePath(HCkCompression cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkCompression_debugLogFilePath(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC int CkCompression_getDeflateLevel(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC void CkCompression_putDeflateLevel(HCkCompression cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkCompression_getEncodingMode(HCkCompression cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC void CkCompression_putEncodingMode(HCkCompression cHandle, const char *newVal);
CK_C_VISIBLE_PUBLIC const char *CkCompression_encodingMode(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC int CkCompression_getHeartbeatMs(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC void CkCompression_putHeartbeatMs(HCkCompression cHandle, int newVal);
CK_C_VISIBLE_PUBLIC void CkCompression_getLastErrorHtml(HCkCompression cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkCompression_lastErrorHtml(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC void CkCompression_getLastErrorText(HCkCompression cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkCompression_lastErrorText(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC void CkCompression_getLastErrorXml(HCkCompression cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkCompression_lastErrorXml(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_getLastMethodSuccess(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC void CkCompression_putLastMethodSuccess(HCkCompression cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_getUtf8(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC void CkCompression_putUtf8(HCkCompression cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_getVerboseLogging(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC void CkCompression_putVerboseLogging(HCkCompression cHandle, BOOL newVal);
CK_C_VISIBLE_PUBLIC void CkCompression_getVersion(HCkCompression cHandle, HCkString retval);
CK_C_VISIBLE_PUBLIC const char *CkCompression_version(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_BeginCompressBytes(HCkCompression cHandle, HCkByteData data, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_BeginCompressBytesAsync(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_BeginCompressBytes2(HCkCompression cHandle, const unsigned char *pByteData, unsigned long szByteData, HCkByteData outBytes);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_BeginCompressBytesENC(HCkCompression cHandle, HCkByteData data, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_beginCompressBytesENC(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_BeginCompressBytesENCAsync(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_BeginCompressString(HCkCompression cHandle, const char *str, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_BeginCompressStringAsync(HCkCompression cHandle, const char *str);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_BeginCompressStringENC(HCkCompression cHandle, const char *str, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_beginCompressStringENC(HCkCompression cHandle, const char *str);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_BeginCompressStringENCAsync(HCkCompression cHandle, const char *str);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_BeginDecompressBytes(HCkCompression cHandle, HCkByteData data, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_BeginDecompressBytesAsync(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_BeginDecompressBytes2(HCkCompression cHandle, const unsigned char *pByteData, unsigned long szByteData, HCkByteData outBytes);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_BeginDecompressBytesENC(HCkCompression cHandle, const char *str, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_BeginDecompressBytesENCAsync(HCkCompression cHandle, const char *str);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_BeginDecompressString(HCkCompression cHandle, HCkByteData data, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_beginDecompressString(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_BeginDecompressStringAsync(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_BeginDecompressStringENC(HCkCompression cHandle, const char *str, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_beginDecompressStringENC(HCkCompression cHandle, const char *str);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_BeginDecompressStringENCAsync(HCkCompression cHandle, const char *str);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_CompressBd(HCkCompression cHandle, HCkBinData binData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_CompressBdAsync(HCkCompression cHandle, HCkBinData binData);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_CompressBytes(HCkCompression cHandle, HCkByteData data, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_CompressBytesAsync(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_CompressBytes2(HCkCompression cHandle, const unsigned char *pByteData, unsigned long szByteData, HCkByteData outBytes);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_CompressBytesENC(HCkCompression cHandle, HCkByteData data, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_compressBytesENC(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_CompressBytesENCAsync(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_CompressFile(HCkCompression cHandle, const char *srcPath, const char *destPath);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_CompressFileAsync(HCkCompression cHandle, const char *srcPath, const char *destPath);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_CompressSb(HCkCompression cHandle, HCkStringBuilder sb, HCkBinData binData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_CompressSbAsync(HCkCompression cHandle, HCkStringBuilder sb, HCkBinData binData);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_CompressStream(HCkCompression cHandle, HCkStream strm);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_CompressStreamAsync(HCkCompression cHandle, HCkStream strm);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_CompressString(HCkCompression cHandle, const char *str, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_CompressStringAsync(HCkCompression cHandle, const char *str);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_CompressStringENC(HCkCompression cHandle, const char *str, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_compressStringENC(HCkCompression cHandle, const char *str);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_CompressStringENCAsync(HCkCompression cHandle, const char *str);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_DecompressBd(HCkCompression cHandle, HCkBinData binData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_DecompressBdAsync(HCkCompression cHandle, HCkBinData binData);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_DecompressBytes(HCkCompression cHandle, HCkByteData data, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_DecompressBytesAsync(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_DecompressBytes2(HCkCompression cHandle, const unsigned char *pByteData, unsigned long szByteData, HCkByteData outBytes);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_DecompressBytesENC(HCkCompression cHandle, const char *encodedCompressedData, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_DecompressBytesENCAsync(HCkCompression cHandle, const char *encodedCompressedData);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_DecompressFile(HCkCompression cHandle, const char *srcPath, const char *destPath);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_DecompressFileAsync(HCkCompression cHandle, const char *srcPath, const char *destPath);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_DecompressSb(HCkCompression cHandle, HCkBinData binData, HCkStringBuilder sb);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_DecompressSbAsync(HCkCompression cHandle, HCkBinData binData, HCkStringBuilder sb);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_DecompressStream(HCkCompression cHandle, HCkStream strm);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_DecompressStreamAsync(HCkCompression cHandle, HCkStream strm);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_DecompressString(HCkCompression cHandle, HCkByteData data, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_decompressString(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_DecompressStringAsync(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_DecompressStringENC(HCkCompression cHandle, const char *encodedCompressedData, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_decompressStringENC(HCkCompression cHandle, const char *encodedCompressedData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_DecompressStringENCAsync(HCkCompression cHandle, const char *encodedCompressedData);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_EndCompressBytes(HCkCompression cHandle, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_EndCompressBytesAsync(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_EndCompressBytesENC(HCkCompression cHandle, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_endCompressBytesENC(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_EndCompressBytesENCAsync(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_EndCompressString(HCkCompression cHandle, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_EndCompressStringAsync(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_EndCompressStringENC(HCkCompression cHandle, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_endCompressStringENC(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_EndCompressStringENCAsync(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_EndDecompressBytes(HCkCompression cHandle, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_EndDecompressBytesAsync(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_EndDecompressBytesENC(HCkCompression cHandle, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_EndDecompressBytesENCAsync(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_EndDecompressString(HCkCompression cHandle, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_endDecompressString(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_EndDecompressStringAsync(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_EndDecompressStringENC(HCkCompression cHandle, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_endDecompressStringENC(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_EndDecompressStringENCAsync(HCkCompression cHandle);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_LoadTaskCaller(HCkCompression cHandle, HCkTask task);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_MoreCompressBytes(HCkCompression cHandle, HCkByteData data, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_MoreCompressBytesAsync(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_MoreCompressBytes2(HCkCompression cHandle, const unsigned char *pByteData, unsigned long szByteData, HCkByteData outBytes);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_MoreCompressBytesENC(HCkCompression cHandle, HCkByteData data, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_moreCompressBytesENC(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_MoreCompressBytesENCAsync(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_MoreCompressString(HCkCompression cHandle, const char *str, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_MoreCompressStringAsync(HCkCompression cHandle, const char *str);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_MoreCompressStringENC(HCkCompression cHandle, const char *str, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_moreCompressStringENC(HCkCompression cHandle, const char *str);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_MoreCompressStringENCAsync(HCkCompression cHandle, const char *str);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_MoreDecompressBytes(HCkCompression cHandle, HCkByteData data, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_MoreDecompressBytesAsync(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_MoreDecompressBytes2(HCkCompression cHandle, const unsigned char *pByteData, unsigned long szByteData, HCkByteData outBytes);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_MoreDecompressBytesENC(HCkCompression cHandle, const char *str, HCkByteData outData);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_MoreDecompressBytesENCAsync(HCkCompression cHandle, const char *str);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_MoreDecompressString(HCkCompression cHandle, HCkByteData data, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_moreDecompressString(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_MoreDecompressStringAsync(HCkCompression cHandle, HCkByteData data);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_MoreDecompressStringENC(HCkCompression cHandle, const char *str, HCkString outStr);
CK_C_VISIBLE_PUBLIC const char *CkCompression_moreDecompressStringENC(HCkCompression cHandle, const char *str);
CK_C_VISIBLE_PUBLIC HCkTask CkCompression_MoreDecompressStringENCAsync(HCkCompression cHandle, const char *str);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_SaveLastError(HCkCompression cHandle, const char *path);
CK_C_VISIBLE_PUBLIC BOOL CkCompression_UnlockComponent(HCkCompression cHandle, const char *unlockCode);
#endif
