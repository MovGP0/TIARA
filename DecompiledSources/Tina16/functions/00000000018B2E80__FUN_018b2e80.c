/* Ghidra address: 018b2e80 */
/* Ghidra symbol: FUN_018b2e80 */


void FUN_018b2e80(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_006ec4a0(*(undefined8 *)(param_1 + 0x788),
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 8));
  (**(code **)(**(longlong **)(param_1 + 0x780) + 0x268))
            (*(longlong **)(param_1 + 0x780),
             *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0xc));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x748),
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x10));
  if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x268))(*(longlong **)(param_1 + 0x740),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x268))
            (*(longlong **)(param_1 + 0x7d8),
             *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x30));
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x31) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x7f0) + 0x268))(*(longlong **)(param_1 + 0x7f0),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x7f0) + 0x268))(*(longlong **)(param_1 + 0x7f0),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x268))
            (*(longlong **)(param_1 + 0x7b0),
             *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x28));
  (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x268))
            (*(longlong **)(param_1 + 0x7e0),*(undefined1 *)(param_1 + 0x818));
  FUN_018b4820(param_1,0);
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x28) != '\0') {
    uVar4 = FUN_0188d920();
    uVar4 = FUN_0188d190(uVar4);
    iVar1 = FUN_0188b8b0(uVar4,0x100);
    uVar4 = FUN_0188d920();
    uVar4 = FUN_0188d190(uVar4);
    iVar2 = FUN_0188b8b0(uVar4,*(undefined4 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x2c));
    if (iVar1 < iVar2) {
      uVar4 = FUN_0188d920();
      uVar4 = FUN_0188d190(uVar4);
      uVar3 = FUN_0188b8b0(uVar4,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x2c));
      (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),uVar3)
      ;
    }
    else {
      uVar4 = FUN_0188d920();
      uVar4 = FUN_0188d190(uVar4);
      iVar1 = FUN_0188b8b0(uVar4,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x228) + 0x2c));
      (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))
                (*(longlong **)(param_1 + 0x798),iVar1 + 1);
    }
  }
  return;
}

