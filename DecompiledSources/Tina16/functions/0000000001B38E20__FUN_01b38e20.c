/* Ghidra address: 01b38e20 */
/* Ghidra symbol: FUN_01b38e20 */


void FUN_01b38e20(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_RDI;
  longlong local_res10 [3];
  int local_2c;
  
  local_res10[0] = param_2;
  FUN_01b38b40(param_1,local_res10);
  iVar2 = FUN_019954d0(param_1);
  iVar2 = iVar2 + 2;
  local_2c = 1;
  if (0 < iVar2) {
    do {
      lVar4 = (longlong)local_2c;
      FUN_00414ad0(local_res10[0] + lVar4 * 0x18,*(undefined8 *)(param_3 + lVar4 * 0x18));
      *(undefined4 *)(local_res10[0] + 8 + lVar4 * 0x18) =
           *(undefined4 *)(param_3 + 8 + lVar4 * 0x18);
      iVar3 = 0;
      for (puVar1 = *(undefined8 **)(param_3 + 0x10 + lVar4 * 0x18); puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)puVar1[4]) {
        iVar3 = iVar3 + 1;
        lVar4 = FUN_00418560(0x28,&DAT_01b385b8);
        if (lVar4 == 0) {
          FUN_00413fb0();
        }
        if (iVar3 == 1) {
          *(longlong *)(local_res10[0] + 0x10 + (longlong)local_2c * 0x18) = lVar4;
        }
        else {
          *(longlong *)(unaff_RDI + 0x20) = lVar4;
        }
        *(undefined8 *)(lVar4 + 0x20) = 0;
        FUN_00414ad0(lVar4,*puVar1);
        FUN_00414ad0(lVar4 + 8,puVar1[1]);
        *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(puVar1 + 3);
        FUN_00414ad0(lVar4 + 0x10,puVar1[2]);
        unaff_RDI = lVar4;
      }
      local_2c = local_2c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

