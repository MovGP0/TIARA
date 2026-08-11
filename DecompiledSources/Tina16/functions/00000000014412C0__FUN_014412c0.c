/* Ghidra address: 014412c0 */
/* Ghidra symbol: FUN_014412c0 */


void FUN_014412c0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  double *local_138;
  undefined1 local_130 [256];
  undefined8 local_30 [2];
  double *local_20;
  
  local_30[0] = 0;
  puVar5 = (undefined2 *)FUN_004095c0(0x40);
  if (puVar5 == (undefined2 *)0x0) {
    FUN_00ef4260(1,param_3);
  }
  else {
    *(undefined2 **)(*param_1 + 0xa8) = puVar5;
    *(undefined1 *)(puVar5 + 1) = 0;
    (**(code **)(*param_2 + 0x288))(param_2,local_30);
    FUN_00416910(local_130,local_30[0],0xff);
    FUN_00415020(puVar5 + 8,local_130,0x28);
    cVar3 = FUN_01cfd030(param_2,0);
    if (cVar3 == '\x03') {
      local_20 = (double *)FUN_01cfd6a0(param_2);
      *(double *)(puVar5 + 4) = *local_20;
      FUN_00b909d0(&local_20,0x10);
      local_138 = local_20;
    }
    else if (cVar3 == '\x06') {
      local_20 = (double *)FUN_01cfd6a0(param_2);
      *(double *)(puVar5 + 4) = *local_20;
      FUN_00b909d0(&local_20,0x28);
      local_138 = local_20;
    }
    *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 1;
    *puVar5 = *(undefined2 *)(param_3 + 0x10);
    if (*local_138 != 0.0) {
      lVar6 = FUN_004095c0(0xb8);
      lVar1 = *param_1;
      *(longlong *)(lVar1 + 0xb0) = lVar6;
      if (lVar6 == 0) {
        FUN_00ef4260(CONCAT71((int7)((ulonglong)lVar1 >> 8),1),param_3);
      }
      else {
        *(char *)(*param_1 + 0xa4) = *(char *)(*param_1 + 0xa4) + '\x01';
        puVar2 = *(undefined1 **)(*param_1 + 0xb0);
        iVar4 = 1;
        do {
          *(undefined4 *)(puVar2 + (longlong)iVar4 * 4) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 != 5);
        iVar4 = 1;
        do {
          *(undefined4 *)(puVar2 + (longlong)iVar4 * 4 + 0x50) = 0xffffffff;
          iVar4 = iVar4 + 1;
        } while (iVar4 != 5);
        if (*(char *)*param_1 == '&') {
          iVar4 = 1;
          do {
            *(undefined4 *)(puVar2 + (longlong)iVar4 * 4) =
                 *(undefined4 *)(*param_1 + (longlong)iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 != 3);
        }
        else {
          iVar4 = 1;
          do {
            *(undefined4 *)(puVar2 + (longlong)iVar4 * 4) =
                 *(undefined4 *)(*param_1 + (longlong)(3 - iVar4) * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 != 3);
        }
        *puVar2 = 0xf;
        puVar2[0xa4] = 0;
        *(undefined8 *)(puVar2 + 0xb0) = 0;
        puVar7 = (undefined2 *)FUN_004095c0(0xa0);
        if (puVar7 == (undefined2 *)0x0) {
          FUN_00ef4260(1,param_3);
        }
        else {
          *(undefined2 **)(puVar2 + 0xa8) = puVar7;
          *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 1;
          *puVar7 = *(undefined2 *)(param_3 + 0x10);
          *(undefined8 *)(puVar7 + 0x34) = 0;
          FUN_00415020(puVar7 + 1,puVar5 + 8,0x28);
          if (*(char *)*param_1 == '&') {
            *(undefined1 *)(puVar7 + 0x1c) = 2;
            *(double *)(puVar7 + 0x20) = *local_138;
          }
          else {
            *(undefined1 *)(puVar7 + 0x1c) = 0x10;
            *(double *)(puVar7 + 0x20) =
                 *(double *)(*(longlong *)(*param_1 + 0xa8) + 8) * *local_138;
          }
          *(undefined8 *)(puVar7 + 0x18) = 0;
          *(undefined8 *)(puVar7 + 0x24) = 0;
          *(undefined8 *)(puVar7 + 0x28) = 0;
          *(undefined8 *)(puVar7 + 0x2c) = 0;
          *(undefined8 *)(puVar7 + 0x30) = 0;
          *(undefined8 *)(puVar7 + 0x38) = 0;
          *(undefined8 *)(puVar7 + 0x3c) = 0;
          *(undefined8 *)(puVar7 + 0x40) = 0;
          *(undefined8 *)(puVar7 + 0x44) = 0;
          *(undefined8 *)(puVar7 + 0x48) = 0;
          *(undefined8 *)(puVar7 + 0x4c) = 0;
          *param_1 = *(longlong *)(*param_1 + 0xb0);
        }
      }
    }
  }
  FUN_00414480(local_30);
  return;
}

