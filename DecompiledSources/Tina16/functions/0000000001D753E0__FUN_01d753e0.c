/* Ghidra address: 01d753e0 */
/* Ghidra symbol: FUN_01d753e0 */


void FUN_01d753e0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,char *param_8,
                 undefined1 *param_9)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_9c [16];
  
  puVar2 = local_9c;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = *(undefined4 *)param_2;
  puVar2 = local_9c;
  puVar3 = param_1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = *(undefined4 *)puVar2;
  *(undefined1 *)((longlong)param_1 + 0x84) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x85) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x86) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x87) = param_6;
  *(undefined1 *)(param_1 + 0x11) = param_7;
  *(char *)((longlong)param_1 + 0x89) = *param_8;
  *param_8 = *param_8 + *(char *)((longlong)param_1 + 0x8c) * '\x02' + '\x04';
  *(undefined1 *)((longlong)param_1 + 0x8a) = *param_9;
  *param_9 = *param_9;
  return;
}

