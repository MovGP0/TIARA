/* Ghidra address: 017b6150 */
/* Ghidra symbol: FUN_017b6150 */


bool FUN_017b6150(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 local_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  cVar1 = FUN_017afd80(param_1,param_2,param_3);
  bVar5 = false;
  if (cVar1 != '\0') {
    FUN_00498350(local_48,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    FUN_017ad620(&local_38,local_48);
    iVar2 = FUN_017ad250((double)(local_30 - local_38));
    iVar3 = FUN_017ad250((double)(local_2c - local_34));
    thunk_FUN_04176532(&local_38,iVar2 * -2,iVar3 * -2);
    iVar2 = FUN_00429b10(&local_38);
    if (iVar2 == 0) {
      uVar4 = FUN_00498310(param_2,param_3);
      iVar2 = thunk_FUN_03f16006(&local_38,uVar4);
      if (iVar2 != 0) {
        return iVar2 == 0;
      }
    }
    iVar2 = FUN_017ad250((double)(local_30 - local_38));
    iVar3 = FUN_017ad250((double)(local_2c - local_34));
    thunk_FUN_04176532(&local_38,iVar2 * 4,iVar3 * 4);
    uVar4 = FUN_00498310(param_2,param_3);
    iVar2 = thunk_FUN_03f16006(&local_38,uVar4);
    bVar5 = iVar2 != 0;
  }
  return bVar5;
}

