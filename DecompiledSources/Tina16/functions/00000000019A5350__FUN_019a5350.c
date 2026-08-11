/* Ghidra address: 019a5350 */
/* Ghidra symbol: FUN_019a5350 */


void FUN_019a5350(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  cVar2 = FUN_017c3740(param_2);
  if (cVar2 == '\0') {
    (**(code **)(*param_2 + 0x1f0))(param_2,0,local_2c,&local_30);
    lVar1 = FUN_0199eaa0(*(undefined8 *)(param_1 + 0x40),local_2c[0],local_30,0);
    param_2[0x7c] = lVar1;
    (**(code **)(*param_2 + 0x1f0))(param_2,1,local_2c,&local_30);
    lVar1 = FUN_0199eaa0(*(undefined8 *)(param_1 + 0x40),local_2c[0],local_30,0);
    param_2[0x7d] = lVar1;
  }
  return;
}

