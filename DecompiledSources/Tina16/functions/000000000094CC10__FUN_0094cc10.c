/* Ghidra address: 0094cc10 */
/* Ghidra symbol: FUN_0094cc10 */


void FUN_0094cc10(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *local_20;
  
  FUN_00598010(param_3 + 8);
  while( true ) {
    while( true ) {
      while( true ) {
        local_20 = param_2;
        FUN_00599f70(param_3 + 8,0,&local_20);
        lVar2 = (**(code **)(*param_2 + 0x170))(param_2);
        if (lVar2 == 0) break;
        param_2 = (longlong *)(**(code **)(*param_2 + 0x170))(param_2);
      }
      cVar1 = (**(code **)(*param_2 + 0x168))(param_2);
      if (cVar1 != '\x02') break;
      lVar2 = (**(code **)(*param_2 + 0x2d0))(param_2);
      if (lVar2 == 0) {
        return;
      }
      param_2 = (longlong *)(**(code **)(*param_2 + 0x2d0))(param_2);
    }
    if (cVar1 != '\v') {
      return;
    }
    lVar2 = (**(code **)(*param_2 + 0x2b8))(param_2);
    if (lVar2 == 0) break;
    param_2 = (longlong *)(**(code **)(*param_2 + 0x2b8))(param_2);
  }
  return;
}

