/* Ghidra address: 00892300 */
/* Ghidra symbol: FUN_00892300 */


int FUN_00892300(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                undefined4 param_5,undefined8 param_6,undefined2 param_7,undefined1 param_8)

{
  int iVar1;
  undefined1 local_29;
  
  iVar1 = FUN_00876b00(param_3,param_5,param_4);
  if (iVar1 < 1) {
    (**(code **)(*param_1 + 0x1a0))(param_1,param_2,&local_29,0,0,param_6,param_7,param_8);
  }
  else {
    (**(code **)(*param_1 + 0x1a0))
              (param_1,param_2,param_3 + param_4,iVar1,0,param_6,param_7,param_8);
  }
  return iVar1;
}

