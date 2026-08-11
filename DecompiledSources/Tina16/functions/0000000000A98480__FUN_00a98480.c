/* Ghidra address: 00a98480 */
/* Ghidra symbol: FUN_00a98480 */


longlong FUN_00a98480(longlong param_1,char param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  longlong local_28;
  int local_1c;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar2 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_40;
  }
  local_40 = puVar2;
  FUN_00410e60(local_res8,0);
  *(longlong *)(local_res8 + 8) = param_3;
  local_30 = *(undefined8 *)(param_3 + 0x1b8);
  FUN_004ae7e0(local_30,local_res8);
  FUN_00414ad0(local_res8 + 0x10,&DAT_00a9866c);
  if (param_4 != 0) {
    iVar4 = *(int *)(param_4 + 0x10);
    local_1c = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_28 = FUN_004aeac0(param_4,local_1c);
        cVar1 = *(char *)(local_28 + 8);
        if (cVar1 == '\x01') {
          FUN_00414ad0(local_res8 + 0x18,*(undefined8 *)(local_28 + 0x28));
        }
        else if (cVar1 == '\x1a') {
          FUN_00414ad0(local_res8 + 0x28,*(undefined8 *)(local_28 + 0x28));
        }
        else if (cVar1 == '0') {
          FUN_00414ad0(local_res8 + 0x10,*(undefined8 *)(local_28 + 0x28));
        }
        else if (cVar1 == 'R') {
          FUN_00414ad0(local_res8 + 0x20,*(undefined8 *)(local_28 + 0x28));
        }
        local_1c = local_1c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  uVar3 = FUN_00610d40(&LAB_00a88c98,1,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

