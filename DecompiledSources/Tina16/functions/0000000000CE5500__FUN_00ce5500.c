/* Ghidra address: 00ce5500 */
/* Ghidra symbol: FUN_00ce5500 */


void FUN_00ce5500(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  byte *local_28;
  byte *local_20;
  
  local_20 = (byte *)0x0;
  local_28 = (byte *)0x0;
  local_30 = 0;
  FUN_00419260(&local_20,&DAT_0086e978,1,1);
  FUN_00419260(&local_28,&DAT_0086e978,1,1);
  FUN_00419260(&local_30,&DAT_0086e978,1,4);
  uVar1 = FUN_004b6da0(param_2);
  FUN_0086e810(&LAB_0086e608,param_2,&local_20,1,0);
  FUN_0086e810(&LAB_0086e608,param_2,&local_28,1,0);
  if (((uint)*local_20 * 0x100 + (uint)*local_28) % 0x1f != 0) {
    uVar2 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,L"Error - invalid header");
    FUN_004134c0(uVar2);
  }
  FUN_0086e810(&LAB_0086e608,param_2,&local_30,4,0);
  FUN_004b6dc0(param_2,uVar1);
  (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_3);
  FUN_004b6dc0(param_2,uVar1);
  FUN_00417840(&local_30,&DAT_0086e978,3);
  return;
}

