/* Ghidra address: 015dda60 */
/* Ghidra symbol: FUN_015dda60 */


void FUN_015dda60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d0 [16];
  undefined8 local_4d;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 *local_30;
  uint local_20;
  undefined1 local_19;
  
  puVar4 = local_d0;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_30 = auStack_108;
  FUN_015ca1c0(param_1);
  FUN_015ca200(param_1);
  *(undefined1 *)((longlong)param_1 + 0x101) = 1;
  local_19 = *(undefined1 *)(param_1[0x18] + 9);
  *(undefined1 *)(param_1[0x18] + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  local_e8 = param_1 + 0x20;
  (**(code **)(*param_1 + 0x98))(param_1,0,4,0);
  cVar1 = FUN_015e2c80(param_1,param_2,&local_20);
  if (cVar1 == '\0') {
    local_38 = 0x11;
    local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffff00000000);
    local_e0 = param_1;
    local_40 = param_2;
    uVar2 = FUN_015b5d20(&PTR_FUN_015b5818,1,0xf,&local_40);
    FUN_004134c0(uVar2);
  }
  else {
    *(undefined4 *)(param_1 + 0x1d) = 1;
    local_e8 = (longlong *)0x0;
    FUN_015d3670(param_1,local_20,param_3,0);
  }
  FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),local_d0,local_20);
  local_e8 = (longlong *)CONCAT71(local_e8._1_7_,2);
  local_e0 = param_1 + 0x20;
  (**(code **)(*param_1 + 0xa0))(param_1,local_4d,0x4059000000000000,4);
  local_e8 = param_1 + 0x20;
  (**(code **)(*param_1 + 0x98))(param_1,0x4059000000000000,4,2);
  *(undefined1 *)(param_1[0x18] + 9) = local_19;
  FUN_00417740(local_d0,&DAT_015b9418);
  return;
}

