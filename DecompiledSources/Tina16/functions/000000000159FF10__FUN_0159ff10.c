/* Ghidra address: 0159ff10 */
/* Ghidra symbol: FUN_0159ff10 */


int FUN_0159ff10(longlong param_1,undefined4 param_2,char *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != s_1_2_5_01f68dec[0])) || (param_4 != 0x54)) {
    iVar1 = -6;
  }
  else if (param_1 == 0) {
    iVar1 = -2;
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (*(longlong *)(param_1 + 0x30) == 0) {
      *(code **)(param_1 + 0x30) = FUN_01596960;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    if (*(longlong *)(param_1 + 0x38) == 0) {
      *(code **)(param_1 + 0x38) = FUN_01596990;
    }
    lVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),1,0x1be0);
    if (lVar2 == 0) {
      iVar1 = -4;
    }
    else {
      *(longlong *)(param_1 + 0x28) = lVar2;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      iVar1 = FUN_0159fbc0(param_1,param_2);
      if (iVar1 != 0) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),lVar2);
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
    }
  }
  return iVar1;
}

