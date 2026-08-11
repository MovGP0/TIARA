/* Ghidra address: 00a06520 */
/* Ghidra symbol: FUN_00a06520 */


void FUN_00a06520(longlong param_1)

{
  undefined2 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_d8 [36];
  int local_b4;
  undefined1 *local_b0;
  undefined4 *local_98;
  undefined2 *local_90;
  longlong local_88;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  undefined1 *local_68;
  undefined2 *local_60;
  ulonglong local_58;
  int local_4c;
  undefined2 *local_48;
  int local_3c;
  int local_38;
  uint local_34;
  int *local_30;
  longlong local_28;
  longlong local_20;
  
  local_b0 = auStack_d8;
  local_b4 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  local_6c = 0;
  if (-1 < local_b4 + -1) {
    do {
      local_28 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),local_6c);
      if ((local_28 != 0) && (*(longlong *)(local_28 + 0x40) == 0)) {
        local_34 = *(int *)(local_28 + 0xc) * 3;
        if ((local_34 & 3) != 0) {
          local_34 = (local_34 & 0xfffffffc) + 4;
        }
        local_38 = local_34 * *(int *)(local_28 + 0x10);
        local_3c = local_38 + 0x36;
        local_88 = local_28;
        local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
        FUN_004b6e40(local_20,(longlong)local_3c);
        puVar1 = *(undefined2 **)(local_20 + 8);
        local_48 = puVar1;
        FUN_0040d200(puVar1,(longlong)local_3c,0);
        *puVar1 = 0x4d42;
        *(int *)(puVar1 + 1) = local_3c;
        puVar1[3] = 0;
        puVar1[4] = 0;
        *(undefined4 *)(puVar1 + 5) = 0x36;
        local_98 = (undefined4 *)(local_48 + 7);
        *local_98 = 0x28;
        *(undefined4 *)(local_48 + 9) = *(undefined4 *)(local_88 + 0xc);
        *(undefined4 *)(local_48 + 0xb) = *(undefined4 *)(local_88 + 0x10);
        local_48[0xd] = 1;
        local_48[0xe] = 0x18;
        *(undefined4 *)(local_48 + 0xf) = 0;
        *(undefined4 *)(local_48 + 0x11) = 0;
        *(undefined4 *)(local_48 + 0x13) = 0;
        *(undefined4 *)(local_48 + 0x15) = 0;
        *(undefined4 *)(local_48 + 0x17) = 0;
        *(undefined4 *)(local_48 + 0x19) = 0;
        local_90 = puVar1;
        local_30 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),
                                       *(undefined4 *)(local_88 + 0x1c));
        local_7c = FUN_00a062d0(param_1,local_6c);
        if ((-1 < local_7c) && (local_7c < *local_30)) {
          local_30[(longlong)local_7c + 1] = 0x170725;
        }
        local_78 = 0;
        local_60 = local_48 + 0x1b;
        local_74 = *(int *)(local_88 + 0x10) + -1;
        if (-1 < local_74) {
          do {
            local_68 = (undefined1 *)((longlong)local_60 + (longlong)(int)(local_74 * local_34));
            iVar3 = *(int *)(local_88 + 0xc);
            local_70 = 0;
            if (-1 < iVar3 + -1) {
              do {
                local_58 = (ulonglong)*(byte *)(*(longlong *)(local_88 + 0x30) + (longlong)local_78)
                ;
                local_4c = local_30[local_58 + 1];
                *local_68 = (char)((uint)local_4c >> 0x10);
                local_68[1] = (char)((uint)local_4c >> 8);
                local_68[2] = (undefined1)local_4c;
                local_68 = local_68 + 3;
                local_78 = local_78 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            local_74 = local_74 + -1;
          } while (local_74 != -1);
        }
        plVar2 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
        *(longlong **)(local_88 + 0x40) = plVar2;
        (**(code **)(*plVar2 + 0xf8))(plVar2,0);
        (**(code **)(**(longlong **)(local_88 + 0x40) + 0xc0))
                  (*(longlong **)(local_88 + 0x40),local_20);
        FUN_00410f20(local_20);
        if ((-1 < local_7c) && (local_7c < *local_30)) {
          (**(code **)(**(longlong **)(local_88 + 0x40) + 0x80))(*(longlong **)(local_88 + 0x40),1);
          FUN_0060be90(*(undefined8 *)(local_88 + 0x40),1);
          FUN_0060be30(*(undefined8 *)(local_88 + 0x40),local_30[(longlong)local_7c + 1]);
        }
      }
      local_6c = local_6c + 1;
      local_b4 = local_b4 + -1;
    } while (local_b4 != 0);
  }
  return;
}

