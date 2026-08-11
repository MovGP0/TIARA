/* Ghidra address: 00edc7d0 */
/* Ghidra symbol: FUN_00edc7d0 */


void FUN_00edc7d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  char cVar1;
  undefined *puVar2;
  ulonglong in_stack_fffffffffffffdb0;
  undefined1 local_248 [267];
  undefined1 local_13d;
  undefined4 local_13c;
  undefined1 local_138 [256];
  undefined1 local_38 [14];
  undefined1 local_2a;
  undefined1 local_29;
  
  puVar2 = &DAT_00edc970;
  FUN_016ba960(*(undefined8 *)(param_1 + 0xef8),local_248,0,&DAT_00edc96c,&DAT_00edc970,
               in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
  FUN_00edb630(param_1,local_248,&local_29,&local_2a);
  FUN_00415020(param_2,local_248,param_3);
  FUN_016b9dd0(*(undefined8 *)(param_1 + 0xef8),&local_13c,&local_13d);
  FUN_016baee0(*(undefined8 *)(param_1 + 0xef8),local_38);
  cVar1 = FUN_016b9d70(*(undefined8 *)(param_1 + 0xef8));
  if (cVar1 == '\0') {
    cVar1 = FUN_016babb0(*(undefined8 *)(param_1 + 0xef8),0,&DAT_00edc96c,&DAT_00edc970,
                         (ulonglong)puVar2 & 0xffffffffffffff00,local_138);
    if (cVar1 == '\0') {
      FUN_016b9e10(*(undefined8 *)(param_1 + 0xef8),local_13c,local_13d);
      FUN_00edb630(param_1,local_248,&local_29,&local_2a);
      FUN_00415020(param_4,local_248,param_5);
    }
    else {
      FUN_016b9e10(*(undefined8 *)(param_1 + 0xef8),local_13c,local_13d);
      FUN_00415020(param_4,&LAB_00edc990,param_5);
    }
  }
  else {
    FUN_016b9df0(*(undefined8 *)(param_1 + 0xef8));
    FUN_00415020(param_4,&LAB_00edc990,param_5);
  }
  return;
}

