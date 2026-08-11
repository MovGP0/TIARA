/* Ghidra address: 0081d960 */
/* Ghidra symbol: FUN_0081d960 */


void FUN_0081d960(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  
  cVar3 = FUN_00818440(param_1);
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
    lVar2 = param_1[0x14];
    if ((lVar2 == 0) || (*(char *)(lVar2 + 0xaa) == '\0')) {
      lVar2 = param_1[0x14];
      if ((lVar2 == 0) || (*(char *)(lVar2 + 0xac) == '\0')) {
        lVar2 = param_1[0x14];
        if ((lVar2 == 0) || (*(char *)(lVar2 + 0xab) == '\0')) {
          if ((param_1[0x14] != 0) && (param_2[2] == 5)) {
            local_38 = (int)*(short *)(param_2 + 4);
            local_34 = (int)*(short *)((longlong)param_2 + 0x12);
            uVar4 = FUN_008199f0(param_1,&local_38);
            lVar2 = param_1[0x14];
            local_30 = (int)uVar4;
            local_30 = local_30 - *(int *)(lVar2 + 0xc);
            iStack_2c = (int)((ulonglong)uVar4 >> 0x20);
            iStack_2c = iStack_2c - *(int *)(lVar2 + 0x10);
            FUN_008178c0(lVar2,local_30,iStack_2c);
            *(undefined1 *)(param_1 + 4) = 1;
          }
          iVar1 = param_2[2];
          if ((((iVar1 == 0x14) || (iVar1 == 9)) || (iVar1 == 8)) || (iVar1 == 0x15)) {
            *(int *)(param_1 + 0x21) = iVar1;
            (**(code **)(*param_1 + 0x60))(param_1);
            *(undefined8 *)(param_2 + 6) = 0;
            *param_2 = 0;
            *(undefined1 *)(param_1 + 4) = 1;
          }
        }
        else {
          *(undefined1 *)(lVar2 + 0x38) = 0;
          *(undefined1 *)(lVar2 + 0xab) = 0;
          FUN_00814130(lVar2,1);
          *(undefined1 *)(param_1 + 4) = 1;
        }
      }
      else {
        *(undefined1 *)(lVar2 + 0x38) = 0;
        *(undefined1 *)(lVar2 + 0xac) = 0;
        FUN_00817c50(lVar2);
        *(undefined1 *)(param_1 + 4) = 1;
      }
    }
    else {
      *(undefined1 *)(lVar2 + 0x38) = 0;
      *(undefined1 *)(lVar2 + 0xaa) = 0;
      FUN_00817b20(lVar2);
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}

