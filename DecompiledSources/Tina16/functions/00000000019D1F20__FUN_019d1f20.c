/* Ghidra address: 019d1f20 */
/* Ghidra symbol: FUN_019d1f20 */


void FUN_019d1f20(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  
  bVar1 = false;
  FUN_005fd6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),2);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),0xff0000);
  for (iVar3 = 0; iVar3 <= *(int *)(param_1 + 0x74) + -1; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    local_78 = *(undefined8 *)(param_1 + 0xb0 + lVar4 * 0x10);
    local_70 = *(undefined8 *)(param_1 + 0x700 + lVar4 * 8);
    FUN_019d0010(param_1,&local_78,&local_48);
    if (*(int *)(param_1 + 0xb8 + lVar4 * 0x10) != 0) {
      lVar4 = (longlong)iVar3;
      if ((*(int *)(param_1 + 0xb8 + lVar4 * 0x10) == 2) ||
         (*(int *)(param_1 + 0xb8 + lVar4 * 0x10) == 4)) {
        iVar2 = iVar3;
        if (*(int *)(param_1 + 0xb8 + lVar4 * 0x10) == 2) {
          iVar2 = iVar3 + -1;
        }
        FUN_019d07f0(param_1,param_2,iVar2,local_30,local_38);
        _local_50 = CONCAT44(*(undefined4 *)(param_1 + 0xac),local_38._0_4_);
        if (*(short *)(param_2 + 0x1fa4) == 0x4c) {
          FUN_019cffb0(param_1,&local_40,local_58);
          FUN_019d05d0(param_1,local_58,local_30);
        }
        else if (*(short *)(param_2 + 0x1fa4) == 0x48) {
          FUN_019d04e0(param_1,&local_40,&local_48,1);
          local_78 = FUN_0040c760(*(double *)(param_1 + 0xb0 + lVar4 * 0x10) *
                                  *(double *)(param_1 + 0xb0 + (longlong)(iVar3 + 1) * 0x10));
          local_70 = *(undefined8 *)
                      (param_1 + 0x700 + (longlong)(*(int *)(param_1 + 0x74) + -1) * 8);
          FUN_019d0010(param_1,&local_78,&local_48);
        }
      }
      else if ((*(int *)(param_1 + 0xb8 + lVar4 * 0x10) == 1) && (0 < iVar3)) {
        if (*(short *)(param_2 + 0x1fa4) == 0x4c) {
          FUN_019d04e0(param_1,&local_40,&local_48,1);
        }
        else if ((*(short *)(param_2 + 0x1fa4) == 0x48) && (bVar1)) {
          FUN_019d04e0(param_1,&local_40,&local_48,1);
        }
      }
      local_40 = local_48;
      bVar1 = true;
    }
  }
  return;
}

