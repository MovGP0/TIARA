/* Ghidra address: 01a0e460 */
/* Ghidra symbol: FUN_01a0e460 */


void FUN_01a0e460(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined1 local_80;
  longlong local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined1 local_29 [9];
  
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = (undefined8 *)0x0;
  local_70 = param_1;
  if ((((param_2 != 0) && (cVar1 = FUN_01d04d40(param_2), cVar1 != '\0')) &&
      (*(char *)(param_2 + 0x1a0) == '\x01')) &&
     (*(longlong *)(*(longlong *)(param_2 + 0x1a8) + 8) != 0)) {
    local_68 = (undefined8 *)FUN_0198d3a0(*(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 8),1,0);
    FUN_017ff200(local_68[0x7d]);
    local_98 = (undefined1 *)
               CONCAT44(local_98._4_4_,*(undefined4 *)(*(longlong *)(param_2 + 0x1a8) + 100));
    local_90 = (undefined1 *)((ulonglong)local_90 & 0xffffffffffff0000);
    local_88 = local_68;
    local_80 = 0;
    FUN_0199a410(local_68,0,0,param_2);
    iVar5 = *(int *)(local_68[0x7d] + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        puVar2 = (undefined4 *)FUN_004aeac0(local_68[0x7d],iVar4);
        cVar1 = FUN_01a0e3e0(auStack_b8,*puVar2);
        if ((cVar1 != '\0') && (cVar1 = FUN_01a0e3e0(auStack_b8,puVar2[1]), cVar1 != '\0')) {
          local_60 = *(undefined8 *)(local_70 + 0x58);
          *(longlong *)(local_70 + 0x58) = param_2;
          local_98 = (undefined1 *)CONCAT44(local_98._4_4_,0xb);
          FUN_019ee820(local_70,&local_48,0x14,0);
          local_98 = local_29;
          FUN_019effd0(local_70,&local_50,*puVar2,0);
          local_98 = local_29;
          FUN_019effd0(local_70,&local_58,puVar2[1],0);
          local_98 = (undefined1 *)local_50;
          local_90 = &LAB_01a0e6f8;
          local_88 = local_58;
          FUN_00416cd0(local_40,5,local_48);
          (**(code **)(**(longlong **)(local_70 + 0x20) + 200))
                    (*(longlong **)(local_70 + 0x20),local_40[0]);
          *(undefined8 *)(local_70 + 0x58) = local_60;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar3 = (**(code **)*local_68)(local_68);
    FUN_00418590(uVar3,&DAT_01984da0);
  }
  FUN_00414560(&local_58,4);
  return;
}

