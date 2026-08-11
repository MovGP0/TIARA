/* Ghidra address: 01429170 */
/* Ghidra symbol: FUN_01429170 */


void FUN_01429170(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  puVar1 = (undefined8 *)
           FUN_01cfde70(*(undefined8 *)(param_1 + 0x6f0),1,0,&local_19,&local_1a,&local_1b);
  *(undefined8 *)(param_1 + 0x708) = *puVar1;
  puVar1 = (undefined8 *)
           FUN_01cfde70(*(undefined8 *)(param_1 + 0x6f0),2,0,&local_19,&local_1a,&local_1b);
  *(undefined8 *)(param_1 + 0x710) = *puVar1;
  puVar1 = (undefined8 *)
           FUN_01cfde70(*(undefined8 *)(param_1 + 0x6f0),3,0,&local_19,&local_1a,&local_1b);
  *(undefined8 *)(param_1 + 0x718) = *puVar1;
  puVar1 = (undefined8 *)
           FUN_01cfde70(*(undefined8 *)(param_1 + 0x6f0),4,0,&local_19,&local_1a,&local_1b);
  *(undefined8 *)(param_1 + 0x720) = *puVar1;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6c0),DAT_01f49758);
  if (*(int *)(param_1 + 0x6f8) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x128))(*(longlong **)(param_1 + 0x6c0),0);
    uVar2 = FUN_014281b0(*(undefined8 *)(param_1 + 0x708),*(undefined8 *)(param_1 + 0x710),
                         *(undefined8 *)(param_1 + 0x718),*(undefined8 *)(param_1 + 0x720));
    FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),uVar2);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),&LAB_01429344);
  }
  else {
    uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6c0));
    uVar2 = FUN_01428270(*(undefined8 *)(param_1 + 0x708),*(undefined8 *)(param_1 + 0x710),
                         *(undefined8 *)(param_1 + 0x718),*(undefined8 *)(param_1 + 0x720),uVar2);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),uVar2);
  }
  FUN_0064cf60(param_1,0x40c);
  return;
}

