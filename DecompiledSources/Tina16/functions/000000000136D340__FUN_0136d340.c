/* Ghidra address: 0136d340 */
/* Ghidra symbol: FUN_0136d340 */


bool FUN_0136d340(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  bVar4 = false;
  if (*(char *)((longlong)param_1 + 0x24) != '\0') {
    uVar1 = FUN_0198d430(*(undefined8 *)(param_1[2] + 0x27a8));
    FUN_01a982d0(uVar1,param_3,param_4,local_2c,&local_30);
    (**(code **)(*param_1 + 0x20))(param_1);
    puVar2 = (undefined4 *)FUN_004aeac0(param_1[3],(int)param_1[4]);
    *puVar2 = local_2c[0];
    lVar3 = FUN_004aeac0(param_1[3],(int)param_1[4]);
    *(undefined4 *)(lVar3 + 4) = local_30;
    (**(code **)(*param_1 + 0x20))(param_1);
    bVar4 = *(char *)((longlong)param_1 + 0x24) == '\0';
  }
  return bVar4;
}

