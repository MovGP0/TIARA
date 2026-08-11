/* Ghidra address: 015caef0 */
/* Ghidra symbol: FUN_015caef0 */


void FUN_015caef0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  undefined1 *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [19];
  
  local_e0 = auStack_118;
  puVar7 = local_b8;
  for (lVar6 = 0x12; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_004179d0(local_b8,&DAT_015b9418);
  local_c8 = (longlong)*(int *)(param_1 + 0xe4);
  local_d0 = *(longlong *)(param_1 + 0x200);
  local_d8 = local_d0;
  if (local_c8 < local_d0) {
    local_d8 = local_c8;
  }
  uVar5 = FUN_00409570(local_d8);
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  FUN_0040d200(param_1 + 0x15c,0x54,0);
  *(undefined8 *)(param_1 + 0x15c) = *(undefined8 *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  uVar3 = FUN_01598d60(param_1 + 0x15c,*(undefined1 *)(param_1 + 0xcf),"1.2.5",0x54);
  FUN_015969b0(uVar3);
  if (*(char *)(param_1 + 0xce) != '\0') {
    FUN_015caac0(param_1,local_b8,param_1 + 0x128);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0x120) = *(undefined8 *)(param_1 + 0x200);
  do {
    if (*(longlong *)(param_1 + 0x200) <= *(longlong *)(param_1 + 0xe8)) {
code_r0x015cb6f2:
      *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0xf8) =
           *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0xf8) + *(longlong *)(param_1 + 0x200);
      if ((*(char *)(param_1 + 0xce) != '\0') &&
         (((*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x243) == '\x01' ||
           (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x243) == '\x02')) ||
          (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x243) == '\x03')))) {
        local_c0 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x58))
                             ((longlong *)**(undefined8 **)(param_1 + 0xd0));
        uVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x68))
                          ((longlong *)**(undefined8 **)(param_1 + 0xd0));
        FUN_015e3070(*(undefined8 *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1f0),local_c0,
                     uVar3);
        FUN_004095f0(local_c0);
        iVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x68))
                          ((longlong *)**(undefined8 **)(param_1 + 0xd0));
        *(longlong *)(param_1 + 0x128) = *(longlong *)(param_1 + 0x128) + (longlong)iVar4;
      }
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x128);
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x200);
      *(uint *)(param_1 + 0xb0) = ~*(uint *)(param_1 + 0x158);
      if (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x100) == '\0') {
        uVar3 = FUN_01597eb0(param_1 + 0x15c);
        FUN_015969b0(uVar3);
      }
      else {
        FUN_01597eb0(param_1 + 0x15c);
      }
      FUN_004095f0(*(undefined8 *)(param_1 + 0x108));
      FUN_00417740(local_b8,&DAT_015b9418);
      return;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0x118) = *(undefined8 *)(param_1 + 0xe8);
    if (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x101) != '\0') {
      local_f8 = CONCAT71(local_f8._1_7_,1);
      local_f0 = *(longlong *)(param_1 + 0x1e0) + 0x100;
      (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0xa0))
                (*(longlong **)(param_1 + 0x1e0),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + 0x83),
                 ((double)*(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x118) /
                 (double)*(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x120)) * 100.0,
                 *(undefined1 *)(*(longlong *)(param_1 + 0x1f8) + 0x8e));
      if (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x100) != '\0') goto code_r0x015cb6f2;
      if (*(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0xf0) < 1) {
        local_f8 = *(longlong *)(param_1 + 0x1e0) + 0x100;
        (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x98))
                  (*(longlong **)(param_1 + 0x1e0),0x4049000000000000,
                   *(undefined1 *)(*(longlong *)(param_1 + 0x1f8) + 0x8e),1);
      }
      else {
        local_f8 = *(longlong *)(param_1 + 0x1e0) + 0x100;
        (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x98))
                  (*(longlong **)(param_1 + 0x1e0),
                   ((double)(*(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0xf8) +
                            *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x118)) /
                   (double)*(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0xf0)) * 100.0,
                   *(undefined1 *)(*(longlong *)(param_1 + 0x1f8) + 0x8e),1);
      }
      if (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x100) != '\0') goto code_r0x015cb6f2;
    }
    if ((longlong)*(int *)(param_1 + 0xe4) <
        *(longlong *)(param_1 + 0x200) - *(longlong *)(param_1 + 0xe8)) {
      *(longlong *)(param_1 + 0x110) = (longlong)*(int *)(param_1 + 0xe4);
    }
    else {
      *(longlong *)(param_1 + 0x110) =
           *(longlong *)(param_1 + 0x200) - *(longlong *)(param_1 + 0xe8);
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x18))
                      (*(longlong **)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x108),
                       *(undefined4 *)(param_1 + 0x110));
    if ((longlong)iVar4 != *(longlong *)(param_1 + 0x110)) goto code_r0x015cb6f2;
    if (*(char *)(param_1 + 0xce) == '\0') {
      FUN_015c0d50(*(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110),param_1 + 0x158
                  );
    }
    FUN_015ca860(param_1);
    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + *(longlong *)(param_1 + 0x110);
    if ((*(char *)(param_1 + 0xcf) != '\0') &&
       (*(longlong *)(param_1 + 0x200) <= *(longlong *)(param_1 + 0xe8))) {
      *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + -4;
    }
    if (*(char *)(param_1 + 0xce) != '\0') {
      bVar1 = *(char *)(*(longlong *)(param_1 + 0x1e0) + 0x243) - 1;
      if (bVar1 == 0xff) {
        FUN_015c0fa0(*(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x118),
                     param_1 + 0x120,param_1 + 0x140);
      }
      else if (bVar1 < 3) {
        local_f8 = param_1 + 0x120;
        local_f0 = CONCAT44(local_f0._4_4_,*(undefined4 *)(param_1 + 0x118));
        (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x38))
                  ((longlong *)**(undefined8 **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x120),
                   *(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x100));
      }
    }
    cVar2 = FUN_015e3070(*(undefined8 *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1f0),
                         *(longlong *)(param_1 + 0x120) + *(longlong *)(param_1 + 0x118),
                         *(undefined4 *)(param_1 + 0x100));
    if (cVar2 == '\0') {
      if (*(longlong *)(param_1 + 0x120) != 0) {
        FUN_004095f0(*(undefined8 *)(param_1 + 0x120));
      }
      *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0x110)
      ;
      goto code_r0x015cb6f2;
    }
    if (*(longlong *)(param_1 + 0x120) != 0) {
      FUN_004095f0(*(undefined8 *)(param_1 + 0x120));
    }
    *(longlong *)(param_1 + 0x128) = *(longlong *)(param_1 + 0x128) + *(longlong *)(param_1 + 0x100)
    ;
  } while( true );
}

