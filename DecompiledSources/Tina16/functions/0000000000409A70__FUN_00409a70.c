/* Ghidra address: 00409a70 */
/* Ghidra symbol: FUN_00409a70 */


void FUN_00409a70(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    if (param_3 < 9) {
      iVar3 = (int)param_3;
      if (iVar3 < 6) {
        if (iVar3 == 5) {
          if (param_1 < param_2) {
            *(undefined1 *)((longlong)param_2 + 4) = *(undefined1 *)((longlong)param_1 + 4);
            *(undefined4 *)param_2 = *(undefined4 *)param_1;
          }
          else {
            *(undefined4 *)param_2 = *(undefined4 *)param_1;
            *(undefined1 *)((longlong)param_2 + 4) = *(undefined1 *)((longlong)param_1 + 4);
          }
        }
        else if (iVar3 == 1) {
          *(undefined1 *)param_2 = *(undefined1 *)param_1;
        }
        else if (iVar3 == 2) {
          *(undefined2 *)param_2 = *(undefined2 *)param_1;
        }
        else if (iVar3 == 3) {
          if (param_1 < param_2) {
            *(undefined1 *)((longlong)param_2 + 2) = *(undefined1 *)((longlong)param_1 + 2);
            *(undefined2 *)param_2 = *(undefined2 *)param_1;
          }
          else {
            *(undefined2 *)param_2 = *(undefined2 *)param_1;
            *(undefined1 *)((longlong)param_2 + 2) = *(undefined1 *)((longlong)param_1 + 2);
          }
        }
        else if (iVar3 == 4) {
          *(undefined4 *)param_2 = *(undefined4 *)param_1;
        }
      }
      else if (iVar3 == 6) {
        if (param_1 < param_2) {
          *(undefined2 *)((longlong)param_2 + 4) = *(undefined2 *)((longlong)param_1 + 4);
          *(undefined4 *)param_2 = *(undefined4 *)param_1;
        }
        else {
          *(undefined4 *)param_2 = *(undefined4 *)param_1;
          *(undefined2 *)((longlong)param_2 + 4) = *(undefined2 *)((longlong)param_1 + 4);
        }
      }
      else if (iVar3 == 7) {
        if (param_1 < param_2) {
          *(undefined1 *)((longlong)param_2 + 6) = *(undefined1 *)((longlong)param_1 + 6);
          *(undefined2 *)((longlong)param_2 + 4) = *(undefined2 *)((longlong)param_1 + 4);
          *(undefined4 *)param_2 = *(undefined4 *)param_1;
        }
        else {
          *(undefined4 *)param_2 = *(undefined4 *)param_1;
          *(undefined2 *)((longlong)param_2 + 4) = *(undefined2 *)((longlong)param_1 + 4);
          *(undefined1 *)((longlong)param_2 + 6) = *(undefined1 *)((longlong)param_1 + 6);
        }
      }
      else if (iVar3 == 8) {
        *param_2 = *param_1;
      }
    }
    else if (param_1 < param_2) {
      uVar1 = *param_1;
      puVar2 = (undefined8 *)((longlong)param_2 + param_3 + -8);
      param_1 = (undefined8 *)((longlong)param_1 + param_3 + -8);
      for (; *puVar2 = *param_1, 0x10 < param_3; param_3 = param_3 + -8) {
        param_1 = param_1 + -1;
        puVar2 = puVar2 + -1;
      }
      *param_2 = uVar1;
    }
    else {
      uVar1 = *(undefined8 *)((longlong)param_1 + param_3 + -8);
      puVar2 = (undefined8 *)((longlong)param_2 + param_3 + -8);
      for (; *param_2 = *param_1, 0x10 < param_3; param_3 = param_3 + -8) {
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
      *puVar2 = uVar1;
    }
  }
  return;
}

