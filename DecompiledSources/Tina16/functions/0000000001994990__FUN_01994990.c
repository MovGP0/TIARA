/* Ghidra address: 01994990 */
/* Ghidra symbol: FUN_01994990 */


void FUN_01994990(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_stack_ffffffffffffff98;
  uint3 uVar5;
  longlong local_30;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  local_30 = 0;
  if (param_2 != (longlong *)0x0) {
    FUN_0198a680(&local_30,param_2);
    if (local_30 == 0) {
      cVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
      if ((cVar1 != '\0') && ((undefined **)*param_2 == &PTR_FUN_017c0190)) {
        in_stack_ffffffffffffff98 = *(undefined4 *)(param_1 + 0x38);
        FUN_017c27c0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x210),
                     *(undefined1 *)(param_1 + 0x68),1,in_stack_ffffffffffffff98,
                     *(undefined4 *)(param_1 + 0x3c));
      }
      cVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
      if ((cVar1 != '\0') && ((undefined **)*param_2 == &PTR_FUN_01cf10a8)) {
        uVar2 = (**(code **)(*param_2 + 0x2b8))(param_2);
        if (*(char *)(param_1 + 0x68) == '\0') {
          iVar3 = (uVar2 & 0xff) + 1;
        }
        else {
          iVar3 = (uVar2 & 0xff) - 1;
        }
        if (iVar3 < 0) {
          iVar3 = 3;
        }
        if (3 < iVar3) {
          iVar3 = 0;
        }
        uVar5 = (uint3)((uint)in_stack_ffffffffffffff98 >> 8);
        if (*(int *)(param_1 + 0x34) == 1) {
          (**(code **)(*param_2 + 0x2b0))
                    (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x210),iVar3,0,
                     (uint)uVar5 << 8,0,0);
        }
        else {
          (**(code **)(*param_2 + 0x2b0))
                    (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x210),iVar3,
                     *(undefined1 *)(param_1 + 0x68),CONCAT31(uVar5,1),
                     *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
        }
        (**(code **)(*param_2 + 0x1b8))(param_2,0,*(undefined8 *)(param_1 + 0x28),1);
        cVar1 = FUN_01cfc630(param_2);
        if (cVar1 == '\0') {
          uVar4 = FUN_01cfcde0(param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
          local_1c._0_2_ = (short)uVar4;
          local_20 = (int)(short)local_1c;
          local_1c._2_2_ = (short)((uint)uVar4 >> 0x10);
          local_24 = (int)local_1c._2_2_;
          local_1c = uVar4;
          FUN_01cf1530(*(undefined1 *)((longlong)param_2 + 0xd1),
                       *(undefined1 *)((longlong)param_2 + 0xd3),&local_20,&local_24);
          FUN_017bf150(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x210),local_20,
                       local_24);
        }
      }
    }
  }
  FUN_00414480(&local_30);
  return;
}

