/* Ghidra address: 01774e00 */
/* Ghidra symbol: FUN_01774e00 */


void FUN_01774e00(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint *local_a0;
  longlong local_90;
  uint local_88 [8];
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char local_45;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  longlong *local_30;
  longlong *local_28;
  longlong local_20;
  
  local_b0 = auStack_f8;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_20 = param_2;
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))
            (*(longlong **)(param_1 + 0xb0),*(undefined8 *)(param_2 + 0x8f8));
  local_44 = FUN_01565320(local_20);
  FUN_0040d200(local_88,0x20,0);
  local_88[0] = local_44;
  local_45 = (local_44 & 1) != 0;
  cVar1 = FUN_015652d0(local_20);
  if (cVar1 != '\0' || local_45 != '\0') {
    FUN_015653d0(local_20,&local_b8,L".sdf");
    cVar1 = FUN_00440a20(local_b8,1);
    if (cVar1 == '\0') {
      FUN_015653d0(local_20,&local_c0,L".dll");
      cVar1 = FUN_00440a20(local_c0,1);
      if (cVar1 == '\0' && local_45 == '\0') {
        FUN_015653d0(local_20,&local_c8,L".tflite");
        cVar1 = FUN_00440a20(local_c8,1);
        if (cVar1 != '\0') {
          FUN_01773f60(param_1,0x4000);
          local_38 = 3;
          FUN_004b6dc0(*(undefined8 *)(param_1 + 0xf8),0);
          FUN_004b89e0(*(undefined8 *)(param_1 + 0xf8),PTR_DAT_02005848,4);
          FUN_004b89e0(*(undefined8 *)(param_1 + 0xf8),&local_38,4);
          local_3c = 3;
          FUN_004b89e0(*(undefined8 *)(param_1 + 0xf8),&local_3c,4);
          FUN_01774d20(auStack_f8,L".tflite",L"TFLITE file not found");
          FUN_01774d20(auStack_f8,&DAT_017756a0,L"Python file not found");
          FUN_01774d20(auStack_f8,L".jpg",L"Input JPEG file not found");
          FUN_015653d0(local_20,&local_d0,L".jpg");
          FUN_00441920(&local_60,local_d0);
          (**(code **)(*local_30 + 0x78))(local_30,local_60);
          FUN_01b23250(*(undefined8 *)(param_1 + 0xf8),local_30);
          *(undefined1 *)(param_1 + 0x62) = 0;
        }
      }
      else {
        FUN_015653d0(local_20,&local_60,L".dll");
        local_68 = FUN_0156b150(local_20);
        local_38 = 0;
        FUN_004b6dc0(*(undefined8 *)(param_1 + 0xf8),0);
        local_90 = *(longlong *)(local_68 + 8);
        FUN_004b89e0(*(undefined8 *)(param_1 + 0xf8),local_90 + 0xc,4);
        FUN_01b20f60(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(local_90 + 0x18));
        FUN_01b20f60(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(local_90 + 0x10));
        FUN_004b6dc0(*(undefined8 *)(param_1 + 0xf8),0x80);
        FUN_004b89e0(*(undefined8 *)(param_1 + 0xf8),PTR_DAT_02003788,4);
        FUN_004b89e0(*(undefined8 *)(param_1 + 0xf8),&local_38,4);
        iVar2 = 8;
        local_a0 = local_88;
        do {
          FUN_004b89e0(*(undefined8 *)(param_1 + 0xf8),local_a0,4);
          local_a0 = local_a0 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        FUN_01773f30(param_1,0x400);
        if ((local_44 & 2) != 0) {
          local_3c = 1;
          FUN_004b89e0(*(undefined8 *)(param_1 + 0xf8),&local_3c,4);
          FUN_00414b50(&local_58,L"{$PRJ}");
          FUN_00441920(&local_60,*(undefined8 *)(local_20 + 0x770));
          FUN_015f4580(*(undefined8 *)(param_1 + 0xf8),local_58);
          FUN_015f4580(*(undefined8 *)(param_1 + 0xf8),local_60);
          FUN_01b23250(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(local_20 + 0x900));
        }
        if (local_45 != '\0') {
          local_40 = 0;
          FUN_004b89e0(*(undefined8 *)(param_1 + 0xf8),&local_40,4);
          FUN_01775590(0,local_b0);
          goto LAB_01775559;
        }
        FUN_01773e60(*(undefined8 *)(param_1 + 0xf8),local_60);
        FUN_00441640(&local_58,local_60);
        FUN_0160b6a0(local_58,local_28);
        local_3c = (**(code **)(*local_28 + 0x28))(local_28);
        FUN_004b89e0(*(undefined8 *)(param_1 + 0xf8),&local_3c,4);
        iVar2 = (**(code **)(*local_28 + 0x28))();
        local_34 = 0;
        if (-1 < iVar2 + -1) {
          do {
            (**(code **)(*local_28 + 0x18))(local_28,&local_50,local_34);
            (**(code **)(*local_30 + 0xd8))(local_30,local_50);
            FUN_00414b50(&local_58,L"{$PRJ}");
            FUN_00441920(&local_60,local_50);
            FUN_015f4580(*(undefined8 *)(param_1 + 0xf8),local_58);
            FUN_015f4580(*(undefined8 *)(param_1 + 0xf8),local_60);
            FUN_01b23250(*(undefined8 *)(param_1 + 0xf8),local_30);
            local_34 = local_34 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        if ((local_68 != 0) && (*(char *)(*(longlong *)(local_68 + 8) + 8) != '\0')) {
          FUN_01773f30(param_1,0x800);
          *(undefined4 *)(param_1 + 0x120) = 3;
        }
        *(undefined1 *)(param_1 + 0x62) = 0;
      }
    }
    else {
      FUN_015653d0(local_20,&local_60,L".sdf");
      (**(code **)(**(longlong **)(param_1 + 0xf0) + 0xd8))(*(longlong **)(param_1 + 0xf0),local_60)
      ;
      *(undefined1 *)(param_1 + 0x62) = 0;
    }
  }
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
LAB_01775559:
  FUN_00414560(&local_d0,4);
  FUN_00414560(&local_60,3);
  return;
}

