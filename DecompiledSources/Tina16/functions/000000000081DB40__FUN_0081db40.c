/* Ghidra address: 0081db40 */
/* Ghidra symbol: FUN_0081db40 */


void FUN_0081db40(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  
  cVar4 = FUN_00818440(param_1);
  if (cVar4 == '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    lVar3 = param_1[0x21];
    if ((int)lVar3 != 0) {
      *(undefined4 *)(param_1 + 0x21) = 0;
      (**(code **)(*param_1 + 0x60))(param_1);
    }
    if ((param_1[0x14] != 0) && (param_2[2] == 5)) {
      local_38 = (int)*(short *)(param_2 + 4);
      local_34 = (int)*(short *)((longlong)param_2 + 0x12);
      uVar5 = FUN_008199f0(param_1,&local_38);
      lVar2 = param_1[0x14];
      local_30 = (int)uVar5;
      local_30 = local_30 - *(int *)(lVar2 + 0xc);
      iStack_2c = (int)((ulonglong)uVar5 >> 0x20);
      iStack_2c = iStack_2c - *(int *)(lVar2 + 0x10);
      FUN_008177c0(lVar2,local_30,iStack_2c);
      *(undefined1 *)(param_1 + 4) = 1;
    }
    iVar1 = param_2[2];
    if (((((((iVar1 != 0xc) && (iVar1 != 0xf)) && (iVar1 != 10)) && ((iVar1 != 0xb && (iVar1 != 2)))
          ) && ((iVar1 != 0xd && ((iVar1 != 0xe && (iVar1 != 0x11)))))) && (iVar1 != 0x10)) &&
       (iVar1 != 3)) {
      if ((int)lVar3 == *(int *)((longlong)param_1 + 0x74)) {
        if (iVar1 == 0x14) {
          (**(code **)(*param_1 + 0x88))(param_1);
        }
        else if ((param_2[2] == 9) && ((*(byte *)(param_1[2] + 0x4d0) & 4) != 0)) {
          if (*(char *)(param_1[2] + 0x4d2) == '\x02') {
            (**(code **)(*param_1 + 0xb0))(param_1);
          }
          else {
            (**(code **)(*param_1 + 0x98))(param_1);
          }
        }
        else if ((param_2[2] == 8) && ((*(byte *)(param_1[2] + 0x4d0) & 2) != 0)) {
          if (*(char *)(param_1[2] + 0x4d2) == '\x01') {
            (**(code **)(*param_1 + 0xb0))(param_1);
          }
          else {
            (**(code **)(*param_1 + 0xa8))(param_1);
          }
        }
        else if ((param_2[2] == 0x15) && ((*(byte *)(param_1[2] + 0x4d0) & 8) != 0)) {
          (**(code **)(*param_1 + 0x90))(param_1);
        }
      }
      *(undefined8 *)(param_2 + 6) = 0;
      *param_2 = 0;
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}

