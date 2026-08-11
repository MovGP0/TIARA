/* Ghidra address: 017d98d0 */
/* Ghidra symbol: FUN_017d98d0 */


void FUN_017d98d0(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  short sVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = *param_4;
  uStack_40 = param_4[1];
  if ((0 < param_2) && (0 < param_3)) {
    lVar3 = (longlong)param_2;
    lVar4 = (longlong)param_3;
    sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar3 * 0x18 + 8) + lVar4 * 2);
    if (sVar1 < 0) {
      FUN_017d9190(param_1,*(longlong *)(param_1 + 0x20) + lVar3 * 0x18,param_3,&local_48);
      FUN_017d9320(param_1,*(longlong *)(param_1 + 0x28) + lVar4 * 0x18,param_2);
    }
    else {
      cVar2 = FUN_017d94d0(param_1,*(longlong *)(param_1 + 0x20) + lVar3 * 0x18,(longlong)sVar1,
                           &local_48);
      if (cVar2 != '\0') {
        FUN_017d9250(param_1,*(longlong *)(param_1 + 0x20) + lVar3 * 0x18,param_3);
        FUN_017d9380(param_1,*(longlong *)(param_1 + 0x28) + lVar4 * 0x18,param_2);
      }
    }
  }
  return;
}

