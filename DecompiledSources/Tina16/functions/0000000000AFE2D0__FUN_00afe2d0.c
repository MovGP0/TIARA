/* Ghidra address: 00afe2d0 */
/* Ghidra symbol: FUN_00afe2d0 */


void FUN_00afe2d0(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
    (**(code **)(*param_1 + 0x2b8))(param_1,0);
  }
  else if (param_2 < 0x15) {
    if (param_2 != (int)param_1[0x99]) {
      FUN_00a77880(param_1);
      lVar1 = param_1[0x116];
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x2a8) != 0)) {
        FUN_00a2a230(*(undefined8 *)(lVar1 + 0x2a8),(int)param_1[0x99]);
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x2b8))(param_1,0x14);
  }
  return;
}

