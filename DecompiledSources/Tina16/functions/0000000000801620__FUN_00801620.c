/* Ghidra address: 00801620 */
/* Ghidra symbol: FUN_00801620 */


void FUN_00801620(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  FUN_007fad70();
  if (*PTR_DAT_02003210 != '\0') {
    if (*(char *)((longlong)param_1 + 0x4d1) == '\x03') {
      uVar4 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar4,0x80,1,0);
    }
    else {
      uVar4 = FUN_0065b870(param_1);
      uVar5 = FUN_008029f0(param_1);
      thunk_FUN_041b2403(uVar4,0x80,1,uVar5);
    }
  }
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    if (*(char *)((longlong)param_1 + 0x4d6) == '\x02') {
      local_30 = 0xff00;
      local_38 = 0;
      if (param_1[0xa3] != 0) {
        local_38 = FUN_007de060(param_1[0xa3]);
      }
      uVar2 = FUN_0064d0b0(param_1);
      uVar3 = FUN_0064d120(param_1);
      uVar4 = FUN_0065b870(param_1);
      lVar6 = thunk_FUN_0411ba23(0x200,L"MDICLIENT",0,0x56330001,0,0,uVar2,uVar3,uVar4,0,
                                 PTR_IMAGE_DOS_HEADER_0200c280,&local_38);
      param_1[0xd3] = lVar6;
      local_48 = *(undefined8 *)(*param_1 + 0x278);
      local_40 = param_1;
      lVar6 = FUN_007f98a0(&local_48);
      param_1[0xd4] = lVar6;
      lVar6 = thunk_FUN_04118143(param_1[0xd3],0xfffffffc);
      param_1[0xa9] = lVar6;
      thunk_FUN_03c9d277(param_1[0xd3],0xfffffffc,param_1[0xd4]);
    }
    else if (*(char *)((longlong)param_1 + 0x4d6) == '\x03') {
      uVar4 = FUN_0065b870(param_1);
      thunk_FUN_041cc6e2(uVar4,0xffffffffffffffff,0,0,0,0,0x213);
    }
  }
  if (param_1[0xca] != 0) {
    iVar8 = *(int *)(param_1[0xca] + 0x10);
    iVar7 = 0;
    if (-1 < iVar8 + -1) {
      do {
        uVar4 = FUN_004aeac0(param_1[0xca],iVar7);
        FUN_00655e40(uVar4);
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    (**(code **)(*(longlong *)param_1[0xca] + 0x10))();
  }
  iVar8 = 0;
  if (param_1[0xcb] != 0) {
    iVar8 = (int)*(undefined8 *)(param_1[0xcb] + -8);
  }
  iVar7 = 0;
  if (iVar8 - 1U < 0x80000000) {
    do {
      thunk_FUN_041b2403(*(undefined8 *)(param_1[0xcb] + 8 + (longlong)iVar7 * 0x10),0xb049,
                         (longlong)*(int *)(param_1[0xcb] + (longlong)iVar7 * 0x10),param_1[0x8d]);
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00419430(param_1 + 0xcb,&DAT_007ed8e8);
  if (((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) &&
     (cVar1 = FUN_0080fc30(param_1[0xd1]), cVar1 != '\0')) {
    FUN_00806bc0(param_1,0);
  }
  if (((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) && (cVar1 = FUN_00781870(), cVar1 != '\0'))
  {
    FUN_00654450(param_1);
  }
  return;
}

