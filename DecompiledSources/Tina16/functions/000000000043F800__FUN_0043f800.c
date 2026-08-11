/* Ghidra address: 0043f800 */
/* Ghidra symbol: FUN_0043f800 */


undefined8 FUN_0043f800(undefined8 param_1,uint param_2,int param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong local_10;
  
  local_10 = 0;
  if (param_4 < param_3) {
    FUN_00419260(&local_10,&DAT_004065c0,1,(longlong)param_3);
    iVar4 = param_3 - param_4;
    iVar1 = 0;
    if (-1 < iVar4 + -1) {
      do {
        *(undefined2 *)(local_10 + (longlong)iVar1 * 2) = param_5;
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    param_3 = param_3 - param_4;
  }
  else {
    FUN_00419260(&local_10,&DAT_004065c0,1,(longlong)param_4);
    param_3 = 0;
  }
  puVar3 = (undefined4 *)(local_10 + (longlong)(param_3 + param_4) * 2);
  for (; 1 < param_4; param_4 = param_4 + -2) {
    puVar3 = puVar3 + -1;
    *puVar3 = *(undefined4 *)
               (u_000102030405060708090A0B0C0D0E0F_01dbfed4 + (ulonglong)(param_2 & 0xff) * 2);
    param_2 = param_2 >> 8;
  }
  if (param_4 == 1) {
    *(wchar_t *)(local_10 + (longlong)param_3 * 2) =
         u_000102030405060708090A0B0C0D0E0F_01dbfed4[(ulonglong)(param_2 & 0xf) + 0x200];
  }
  lVar2 = 0;
  if (local_10 != 0) {
    lVar2 = *(longlong *)(local_10 + -8);
  }
  FUN_00456360(param_1,local_10,lVar2 + -1);
  FUN_00419430(&local_10,&DAT_004065c0);
  return param_1;
}

