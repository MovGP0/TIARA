/* Ghidra address: 00c7b1b0 */
/* Ghidra symbol: FUN_00c7b1b0 */


undefined1 FUN_00c7b1b0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ushort extraout_var;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar5 = *(undefined1 *)((longlong)param_1 + 0x3dc);
  lVar3 = (**(code **)(*param_1 + 0x90))(param_1);
  if (lVar3 != 0) {
    if ((char)param_1[0x7b] == '\x01') {
      iVar1 = thunk_FUN_041b2403(param_1[0x3b],0x108f,0,0);
      if (iVar1 == 0) {
        thunk_FUN_041b2403(param_1[0x3b],0x1033,0,0);
        iVar1 = thunk_FUN_0410f747(0x26);
        if (iVar1 < (int)(uint)extraout_var) {
          uVar5 = 4;
        }
        else {
          uVar5 = 0;
        }
      }
      else if (iVar1 == 1) {
        uVar5 = 3;
      }
      else if (iVar1 == 2) {
        uVar5 = 1;
      }
      else if (iVar1 == 3) {
        uVar5 = 2;
      }
      else if (iVar1 == 4) {
        uVar5 = 5;
      }
      else {
        uVar5 = 4;
      }
    }
    else {
      uVar4 = FUN_00c7a6e0(param_1);
      uVar2 = thunk_FUN_04118143(uVar4,0xfffffff0);
      uVar2 = uVar2 & 3;
      if (uVar2 == 0) {
        uVar5 = 0;
      }
      if (uVar2 == 1) {
        uVar5 = 3;
      }
      if (uVar2 == 2) {
        uVar5 = 1;
      }
      if (uVar2 == 3) {
        uVar5 = 2;
      }
    }
  }
  return uVar5;
}

