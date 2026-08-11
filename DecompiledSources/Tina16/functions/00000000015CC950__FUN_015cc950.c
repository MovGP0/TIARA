/* Ghidra address: 015cc950 */
/* Ghidra symbol: FUN_015cc950 */


undefined1 FUN_015cc950(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [32];
  undefined2 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined1 *local_70;
  longlong local_68;
  undefined1 local_60 [56];
  undefined8 local_28;
  undefined1 local_19;
  
  local_70 = auStack_b8;
  local_19 = 0;
  thunk_FUN_03bff373(local_60);
  *(undefined4 *)(param_1 + 0xcc) = 0x100000;
  *(undefined1 *)(*(longlong *)(param_1 + 0x1f0) + 0x102) = 0;
  if (*(char *)(param_1 + 0xf7) != '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0x208) + 0x4e) == '\0') {
      *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + -0xc;
    }
    else if (((*(char *)(*(longlong *)(param_1 + 0x208) + 0x4e) == '\x01') ||
             (*(char *)(*(longlong *)(param_1 + 0x208) + 0x4e) == '\x02')) ||
            (*(char *)(*(longlong *)(param_1 + 0x208) + 0x4e) == '\x03')) {
      iVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xe8) + 0x50))
                        ((longlong *)**(undefined8 **)(param_1 + 0xe8));
      iVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xe8) + 0x68))
                        ((longlong *)**(undefined8 **)(param_1 + 0xe8));
      *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) - (longlong)(iVar4 + iVar3);
    }
    local_28 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x1f8));
LAB_015cca7e:
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0x1f8),local_28);
    if (*(char *)(*(longlong *)(param_1 + 0x208) + 0x4e) == '\0') {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x248) == 0) {
LAB_015ccb51:
        uVar2 = 1;
      }
      else {
        local_98 = *(undefined2 *)(param_1 + 0x9c);
        local_90 = *(undefined4 *)(param_1 + 0xa0);
        local_88 = param_1 + 0x1a0;
        cVar1 = FUN_015cbe30(*(undefined8 *)(param_1 + 0x1f0),*(undefined8 *)(param_1 + 0x1f8),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x248),
                             *(undefined2 *)(param_1 + 0x98));
        if (cVar1 == '\0') goto LAB_015ccb51;
        uVar2 = 0;
      }
      *(undefined1 *)(param_1 + 0x91) = uVar2;
    }
    else if (((*(char *)(*(longlong *)(param_1 + 0x208) + 0x4e) == '\x01') ||
             (*(char *)(*(longlong *)(param_1 + 0x208) + 0x4e) == '\x02')) ||
            (*(char *)(*(longlong *)(param_1 + 0x208) + 0x4e) == '\x03')) {
      (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xe8) + 0x48))
                ((longlong *)**(undefined8 **)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0x1f8),0);
      cVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xe8) + 8))
                        ((longlong *)**(undefined8 **)(param_1 + 0xe8),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x248));
      *(bool *)(param_1 + 0x91) = cVar1 == '\0';
    }
    if (*(char *)(*(longlong *)(param_1 + 0x1f0) + 0x230) == '\0') {
      if (*(char *)(param_1 + 0x91) == '\0') {
        FUN_00414bf0(*(longlong *)(param_1 + 0x1f0) + 0x248,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x248));
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0xc0))
                  (*(longlong **)(param_1 + 0x1f0),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x2e),
                   *(longlong *)(param_1 + 0x1f0) + 0x248,*(longlong *)(param_1 + 0x1f0) + 0x102);
        if ((((*(char *)(*(longlong *)(param_1 + 0x208) + 0x4e) == '\x01') ||
             (*(char *)(*(longlong *)(param_1 + 0x208) + 0x4e) == '\x02')) ||
            (*(char *)(*(longlong *)(param_1 + 0x208) + 0x4e) == '\x03')) &&
           ((iVar4 = FUN_00415a60(*(undefined8 *)(**(longlong **)(param_1 + 0xe8) + 0x1b8),
                                  *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x248)),
            iVar4 != 0 && (*(char *)(*(longlong *)(param_1 + 0x1f0) + 0x102) == '\0')))) {
          (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0xe8))
                    ((undefined8 *)**(undefined8 **)(param_1 + 0xe8),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x248));
        }
      }
      if ((*(char *)(param_1 + 0x91) == '\0') ||
         (*(char *)(*(longlong *)(param_1 + 0x1f0) + 0x102) != '\0')) goto code_r0x015ccde8;
      goto LAB_015cca7e;
    }
    FUN_00414bf0(*(longlong *)(param_1 + 0x1f0) + 0x248,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x248));
code_r0x015ccde8:
    if (*(char *)(*(longlong *)(param_1 + 0x1f0) + 0x102) != '\0') {
      return local_19;
    }
  }
  uVar6 = FUN_00409570((longlong)(*(int *)(param_1 + 0xcc) + 2));
  *(undefined8 *)(param_1 + 0x1b8) = uVar6;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_0040d200(param_1 + 0x13c,0x54,0);
  *(undefined8 *)(param_1 + 0x13c) = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  uVar5 = FUN_0159fed0(param_1 + 0x13c,"1.2.5",0x54);
  FUN_01596a70(uVar5);
  while (*(longlong *)(param_1 + 0xd0) < *(longlong *)(param_1 + 0xb0)) {
    if ((longlong)*(int *)(param_1 + 0xcc) <
        *(longlong *)(param_1 + 0xb0) - *(longlong *)(param_1 + 0xd0)) {
      *(longlong *)(param_1 + 0xf8) = (longlong)*(int *)(param_1 + 0xcc);
    }
    else {
      *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xb0) - *(longlong *)(param_1 + 0xd0);
    }
    cVar1 = FUN_015cbed0(param_1,*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0xf8));
    if ((cVar1 == '\0') || (cVar1 = FUN_015cbfe0(param_1), cVar1 == '\0')) {
      FUN_015cd230(0,local_70);
      return local_19;
    }
    FUN_004095f0(*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + *(longlong *)(param_1 + 0xd8);
    *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 0xd0) + *(longlong *)(param_1 + 0xf8);
    if (*(longlong *)(param_1 + 0x88) < *(longlong *)(param_1 + 0x218)) {
      FUN_004b6dc0(*(undefined8 *)(param_1 + 0x200),0);
    }
    else if (*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0xd8) <
             *(longlong *)(param_1 + 0x218)) {
      local_68 = (*(longlong *)(param_1 + 0xd8) - *(longlong *)(param_1 + 0x88)) +
                 *(longlong *)(param_1 + 0x218);
    }
    if ((0 < *(int *)(param_1 + 0x210)) &&
       (*(longlong *)(param_1 + 0x218) + (longlong)*(int *)(param_1 + 0x210) <=
        *(longlong *)(param_1 + 0x88))) {
      if (0 < *(longlong *)(param_1 + 0x218)) {
        FUN_004b6dc0(*(undefined8 *)(param_1 + 0x200),local_68);
      }
      break;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x1f0) + 0x100) != '\0') break;
  }
  FUN_0159f460(param_1 + 0x13c);
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0xe0));
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x1b8));
  }
  return 1;
}

