/* Ghidra address: 010b4cd0 */
/* Ghidra symbol: FUN_010b4cd0 */


void FUN_010b4cd0(longlong param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  bVar1 = FUN_0040c770((double)*param_2 * 0.3 + (double)*param_3 * 0.59 + (double)*param_4 * 0.11);
  cVar2 = FUN_0040c770(((double)*param_2 / 256.0) *
                       (double)(int)(0xff - (uint)*(byte *)(param_1 + 0x468)));
  cVar3 = FUN_0040c770(((double)bVar1 / 256.0) * (double)(*(byte *)(param_1 + 0x468) + 1));
  *param_2 = cVar2 + cVar3;
  cVar2 = FUN_0040c770(((double)*param_3 / 256.0) *
                       (double)(int)(0xff - (uint)*(byte *)(param_1 + 0x468)));
  cVar3 = FUN_0040c770(((double)bVar1 / 256.0) * (double)(*(byte *)(param_1 + 0x468) + 1));
  *param_3 = cVar2 + cVar3;
  cVar2 = FUN_0040c770(((double)*param_4 / 256.0) *
                       (double)(int)(0xff - (uint)*(byte *)(param_1 + 0x468)));
  cVar3 = FUN_0040c770(((double)bVar1 / 256.0) * (double)(*(byte *)(param_1 + 0x468) + 1));
  *param_4 = cVar2 + cVar3;
  return;
}

