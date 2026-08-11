/* Ghidra address: 01d23250 */
/* Ghidra symbol: FUN_01d23250 */


void FUN_01d23250(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a08 [32];
  undefined8 local_9e8;
  undefined8 *local_9e0;
  undefined8 local_9d8;
  undefined8 *local_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 local_988;
  longlong local_980;
  undefined8 local_974 [295];
  int local_3c;
  undefined2 *local_38;
  undefined2 *local_30 [2];
  
  local_9b8 = 0;
  local_9b0 = 0;
  local_9a8 = 0;
  local_9a0 = 0;
  local_998 = 0;
  local_990 = 0;
  local_988 = 0;
  local_980 = 0;
  puVar5 = local_974;
  for (lVar4 = 0x127; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_9c8 = param_2;
  local_9c0 = param_4;
  FUN_004179d0(local_974,&DAT_01d0d0b8);
  local_30[0] = (undefined2 *)FUN_00442b60(0x100);
  local_38 = (undefined2 *)FUN_00442b60(0x100);
  puVar3 = (undefined2 *)FUN_00442b60(0x100);
  *local_30[0] = 0;
  *local_38 = 0;
  *puVar3 = 0;
  local_3c = 1;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x90))(*(longlong **)(param_1 + 0x50));
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x78))(*(longlong **)(param_1 + 0x50),0);
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x90))(*(longlong **)(param_1 + 0x58));
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x90))(*(longlong **)(param_1 + 0x68));
  while (iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                           (*(longlong **)(param_1 + 0xa0)), local_3c <= iVar2) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
              (*(longlong **)(param_1 + 0xa0),&local_9b8,local_3c + -1);
    iVar2 = FUN_004170c0(L"@ Interpreter configuration",local_9b8,1);
    if (iVar2 != 0) break;
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
              (*(longlong **)(param_1 + 0xa0),&local_980,local_3c + -1);
    iVar2 = 0;
    if (local_980 != 0) {
      iVar2 = *(int *)(local_980 + -4);
    }
    if (0 < iVar2) {
      (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                (*(longlong **)(param_1 + 0xa0),&local_988,local_3c + -1);
      iVar2 = FUN_004170c0(L"<fbegin>",local_988,1);
      if (iVar2 < 1) {
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                  (*(longlong **)(param_1 + 0xa0),&local_9a8,local_3c + -1);
        iVar2 = FUN_004170c0(&DAT_01d23874,local_9a8,1);
        if (iVar2 < 1) {
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_9b0,local_3c + -1);
          iVar2 = FUN_004170c0(L"Time shift:",local_9b0,1);
          if (iVar2 < 1) {
            FUN_01d22430(auStack_a08);
          }
          else {
            FUN_01d227b0(auStack_a08);
          }
        }
        else {
          FUN_01d21c10(auStack_a08);
        }
      }
      else {
        local_38 = (undefined2 *)FUN_00442620(local_38,&DAT_01d23840);
        uVar1 = FUN_01d11780(local_30[0]);
        FUN_01d11990(local_38,local_30,uVar1);
        iVar2 = local_3c;
        while( true ) {
          local_3c = iVar2 + 1;
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_9a0,iVar2);
          iVar2 = FUN_004170c0(L"<fend>",local_9a0,1);
          if (iVar2 != 0) break;
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_990,local_3c + -1);
          iVar2 = FUN_004170c0(L"<abegin>",local_990,1);
          if (iVar2 < 1) {
            (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                      (*(longlong **)(param_1 + 0xa0),&local_998,local_3c + -1);
            iVar2 = FUN_004170c0(&DAT_01d23874,local_998,1);
            if (iVar2 < 1) {
              FUN_01d22430(auStack_a08);
              iVar2 = local_3c;
            }
            else {
              FUN_01d21c10(auStack_a08);
              iVar2 = local_3c;
            }
          }
          else {
            local_3c = local_3c + 1;
            FUN_01d22e20(auStack_a08);
            iVar2 = local_3c;
          }
        }
        local_38 = (undefined2 *)FUN_00442620(local_38,&DAT_01d238a0);
        uVar1 = FUN_01d11780(local_30[0]);
        FUN_01d11990(local_38,local_30,uVar1);
      }
      local_9e8 = 0;
      local_9e0 = local_974;
      local_9d8 = local_9c0;
      FUN_01d1eec0(param_1,param_1 + 0x50,local_30[0],0);
      local_30[0] = (undefined2 *)FUN_00442620(local_30[0],0);
    }
    local_3c = local_3c + 1;
  }
  (**(code **)(*(longlong *)*local_9c8 + 0x90))((longlong *)*local_9c8);
  FUN_01d23910(*(undefined8 *)(param_1 + 0x50),500,local_9c8);
  (**(code **)(*(longlong *)*local_9c8 + 0x88))
            ((longlong *)*local_9c8,*(undefined8 *)(param_1 + 0x60));
  (**(code **)(*(longlong *)*local_9c8 + 0x88))
            ((longlong *)*local_9c8,*(undefined8 *)(param_1 + 0x58));
  (**(code **)(*(longlong *)*local_9c8 + 0x88))
            ((longlong *)*local_9c8,*(undefined8 *)(param_1 + 0x68));
  FUN_00442c30(local_30[0]);
  FUN_00442c30(local_38);
  FUN_00442c30(puVar3);
  FUN_00414560(&local_9b8,8);
  FUN_00417740(local_974,&DAT_01d0d0b8);
  return;
}

