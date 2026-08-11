/* Ghidra address: 010e8000 */
/* Ghidra symbol: FUN_010e8000 */


void FUN_010e8000(longlong param_1,byte param_2,char param_3,int param_4,char param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [4];
  int local_3c [5];
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (param_2 == 0) {
    plVar3 = *(longlong **)(lVar1 + 0xf8);
  }
  else {
    plVar3 = *(longlong **)(lVar1 + 0xf0);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,1);
    if (param_5 == '\0') {
      local_48 = 0;
      FUN_010e7c20(param_1,param_2,local_3c,local_40,&local_44);
      local_3c[0] = *(int *)((longlong)plVar3 + 100);
      local_44 = (undefined4)plVar3[0xd];
      if (param_3 == '\x04') {
        local_3c[0] = local_3c[0] - param_4;
      }
      else if (param_3 == '\x05') {
        local_3c[0] = local_3c[0] + param_4;
      }
      FUN_01ad3cf0(lVar1,local_3c[0],local_44,&local_48);
      FUN_010e7bd0(param_1,param_2);
    }
    else {
      dVar6 = (double)plVar3[0xf];
      if (param_3 == '\x04') {
        dVar6 = dVar6 - (double)param_4 * *(double *)(param_1 + 0x108);
      }
      else if (param_3 == '\x05') {
        dVar6 = dVar6 + (double)param_4 * *(double *)(param_1 + 0x108);
      }
      dVar4 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x108));
      if (1e-30 < dVar4) {
        lVar2 = FUN_0040c770(dVar6 / *(double *)(param_1 + 0x108));
        dVar6 = (double)lVar2 * *(double *)(param_1 + 0x108);
      }
      uVar5 = FUN_00b90650(dVar6,*(undefined8 *)(param_1 + 0xe0 + (ulonglong)param_2 * 0x20));
      uVar5 = FUN_00b90620(uVar5,*(undefined8 *)(param_1 + 0xd8 + (ulonglong)param_2 * 0x20));
      FUN_01ae24a0(lVar1,param_2,uVar5);
    }
    (**(code **)(*plVar3 + 0x50))(plVar3,0);
  }
  return;
}

