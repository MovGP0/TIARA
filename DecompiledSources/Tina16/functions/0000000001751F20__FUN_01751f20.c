/* Ghidra address: 01751f20 */
/* Ghidra symbol: FUN_01751f20 */


void FUN_01751f20(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uVar3;
  
  FUN_01d03160(*(undefined8 *)(param_1 + 0x28));
  FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),param_4,param_5,&local_2c,&local_30,1,0);
  FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),param_6,param_7,&local_34,&local_38,1,0);
  FUN_01a98380(param_2,local_2c,local_30,&local_3c,&local_40);
  puVar2 = &local_48;
  FUN_01a98380(param_2,local_34,local_38,&local_44,puVar2);
  uVar3 = (undefined4)((ulonglong)puVar2 >> 0x20);
  plVar1 = (longlong *)FUN_01a97e00(param_2);
  FUN_00498350(local_58,local_3c,local_40,local_44,CONCAT44(uVar3,local_48));
  (**(code **)(*plVar1 + 0x110))(plVar1,local_58,*param_3);
  FUN_01a97ea0(param_2,plVar1);
  return;
}

