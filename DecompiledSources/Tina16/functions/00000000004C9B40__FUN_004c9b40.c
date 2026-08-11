/* Ghidra address: 004c9b40 */
/* Ghidra symbol: FUN_004c9b40 */


undefined8 FUN_004c9b40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  longlong local_30 [2];
  
  FUN_004c8ed0(param_1,1);
  lVar3 = *(longlong *)(param_1 + 0x30);
  while (*(char *)(*(longlong *)(param_1 + 0x18) + lVar3) == '.') {
    local_30[0] = lVar3 + 1;
    cVar1 = FUN_004c8cb0(param_1,local_30);
    if (cVar1 != '\x01') {
      FUN_004c8dd0(param_1,PTR_PTR_02003260);
    }
    do {
      lVar3 = local_30[0];
      uVar2 = FUN_004c8cb0(param_1,local_30);
      if ((byte)uVar2 < 8) {
        bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 0xeU) != 0
        ;
      }
      else {
        bVar4 = false;
      }
    } while (bVar4);
  }
  *(longlong *)(param_1 + 0x30) = lVar3;
  FUN_004c9990(param_1,param_2);
  return param_2;
}

