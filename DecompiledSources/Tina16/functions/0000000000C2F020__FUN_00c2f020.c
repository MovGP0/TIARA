/* Ghidra address: 00c2f020 */
/* Ghidra symbol: FUN_00c2f020 */


undefined1 * FUN_00c2f020(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char local_34;
  undefined1 local_33 [11];
  
  iVar1 = FUN_004b6da0(param_2);
  puVar4 = (undefined1 *)0x0;
  iVar2 = (**(code **)(*param_2 + 0x18))(param_2,&local_34,1);
  if (iVar2 == 1) {
    if (local_34 == '\n') {
      iVar1 = (**(code **)(*param_2 + 0x18))(param_2,local_33,10);
      if (iVar1 == 10) {
        puVar4 = &LAB_00c16ab0;
      }
    }
    else {
      if ((local_34 == '\v') &&
         (iVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_33,0xb), iVar2 == 0xb)) {
        uVar3 = FUN_00c2efb0();
        puVar4 = (undefined1 *)FUN_00c2eef0(uVar3,local_33);
        if (puVar4 != (undefined1 *)0x0) {
          return puVar4;
        }
        return &LAB_00c16ab0;
      }
      FUN_004b6dc0(param_2,(longlong)iVar1);
      puVar4 = (undefined1 *)FUN_00c2de50(param_1,param_2);
    }
  }
  return puVar4;
}

