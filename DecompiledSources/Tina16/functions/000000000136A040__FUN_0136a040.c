/* Ghidra address: 0136a040 */
/* Ghidra symbol: FUN_0136a040 */


void FUN_0136a040(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x27a8);
  FUN_01369fe0(param_1);
  uVar2 = FUN_0198d430(uVar2);
  puVar3 = &local_30;
  FUN_01a982d0(uVar2,param_2,param_3,&local_2c,puVar3);
  uVar4 = (undefined4)((ulonglong)puVar3 >> 0x20);
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\0') {
    FUN_01c74ee0(*(undefined8 *)(param_1 + 0x10),local_2c,local_30);
  }
  else if (cVar1 == '\x01') {
    FUN_01c74cf0(*(undefined8 *)(param_1 + 0x10),local_2c,local_30);
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)(param_1 + 0x24) = local_2c;
    *(undefined4 *)(param_1 + 0x28) = local_30;
    if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x1c)) {
      FUN_01cefdf0(param_1 + 0x1c,param_1 + 0x24);
    }
    if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x20)) {
      FUN_01cefdf0(param_1 + 0x20,param_1 + 0x28);
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    FUN_01c750d0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                 CONCAT44(uVar4,*(undefined4 *)(param_1 + 0x28)));
  }
  FUN_01364ff0(param_1,param_2,param_3);
  return;
}

