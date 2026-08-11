/* Ghidra address: 00d40fc0 */
/* Ghidra symbol: FUN_00d40fc0 */


void FUN_00d40fc0(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc4);
  if (iVar1 != 0) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  iVar2 = param_2[2];
  if ((((((iVar2 != 0xc) && (iVar2 != 0xf)) && (iVar2 != 10)) && ((iVar2 != 0xb && (iVar2 != 2))))
      && ((iVar2 != 0xd && ((iVar2 != 0xe && (iVar2 != 0x11)))))) &&
     ((iVar2 != 0x10 && (iVar2 != 3)))) {
    if (iVar1 == (int)param_1[0x19]) {
      if (iVar2 == 0x14) {
        (**(code **)(*param_1 + 0xc0))(param_1);
      }
      else if (iVar2 == 9) {
        cVar3 = FUN_00d3eda0(param_1);
        if (cVar3 == '\x02') {
          (**(code **)(*param_1 + 0xe0))(param_1);
        }
        else {
          (**(code **)(*param_1 + 0xd0))(param_1);
        }
      }
      else if (iVar2 == 8) {
        cVar3 = FUN_00d3eda0(param_1);
        if (cVar3 == '\x01') {
          (**(code **)(*param_1 + 0xe0))(param_1);
        }
        else {
          (**(code **)(*param_1 + 0xd8))(param_1);
        }
      }
      else if (iVar2 == 0x15) {
        (**(code **)(*param_1 + 200))(param_1);
      }
    }
    *(undefined8 *)(param_2 + 6) = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}

