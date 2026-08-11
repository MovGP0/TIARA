/* Ghidra address: 01c74100 */
/* Ghidra symbol: FUN_01c74100 */


void FUN_01c74100(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uVar4;
  
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x1280),1);
  if ((short)param_2[2] == 5) {
    if (*param_2 == 0x114) {
      FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x498),
                   (longlong)*(short *)((longlong)param_2 + 10));
    }
    else {
      FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x4b0),
                   (longlong)*(short *)((longlong)param_2 + 10));
    }
  }
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    lVar1 = FUN_0198d430(*(longlong *)(param_1 + 0x27a8));
    if (lVar1 != 0) {
      uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      FUN_01a98210(uVar2,&local_28);
      FUN_00b95860(&local_28,-local_28,-local_24);
      uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      puVar3 = &local_30;
      FUN_01a984b0(uVar2,*(undefined4 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x498) + 0x14),
                   *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa10) + 0x4b0) + 0x14),
                   &local_2c,puVar3);
      uVar4 = (undefined4)((ulonglong)puVar3 >> 0x20);
      FUN_00b95860(&local_28,local_2c,local_30);
      FUN_01c74990(param_1,local_28,local_24,local_20,CONCAT44(uVar4,local_1c));
    }
  }
  return;
}

