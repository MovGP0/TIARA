/* Ghidra address: 017b6ce0 */
/* Ghidra symbol: FUN_017b6ce0 */


bool FUN_017b6ce0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  
  cVar1 = FUN_017afd80(param_1,param_2,param_3);
  bVar4 = false;
  if (cVar1 != '\0') {
    FUN_00498350(local_48,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    FUN_017ad620(local_38,local_48);
    thunk_FUN_04176532(local_38,0xfffffffe,0xfffffffe);
    iVar2 = FUN_00429b10(local_38);
    if (iVar2 == 0) {
      uVar3 = FUN_00498310(param_2,param_3);
      iVar2 = thunk_FUN_03f16006(local_38,uVar3);
      if (iVar2 != 0) {
        return iVar2 == 0;
      }
    }
    thunk_FUN_04176532(local_38,4,4);
    uVar3 = FUN_00498310(param_2,param_3);
    iVar2 = thunk_FUN_03f16006(local_38,uVar3);
    bVar4 = iVar2 != 0;
  }
  return bVar4;
}

