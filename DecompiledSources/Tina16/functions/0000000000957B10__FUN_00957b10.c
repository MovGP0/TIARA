/* Ghidra address: 00957b10 */
/* Ghidra symbol: FUN_00957b10 */


undefined1 FUN_00957b10(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  byte local_41;
  undefined8 local_40 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_61 = 1;
  (**(code **)(*param_2 + 0xe8))(param_2,&local_50);
  lVar2 = (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],local_50);
  if (lVar2 != 0) {
    iVar1 = (**(code **)**(undefined8 **)(lVar2 + 0x28))();
    iVar6 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 0x28))
                          (*(longlong **)(lVar2 + 0x28),iVar6);
        puVar4 = (undefined8 *)FUN_004113f0(uVar3,&PTR_FUN_00912520);
        if (*(byte *)(puVar4 + 7) < 8) {
          bVar7 = ((int)CONCAT71((int7)((ulonglong)puVar4 >> 8),1) << (*(byte *)(puVar4 + 7) & 0x1f)
                  & 3U) != 0;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          (**(code **)*puVar4)(puVar4,&local_58);
          lVar5 = (**(code **)(*param_2 + 0x2c8))(param_2,local_58);
          if (lVar5 == 0) {
            uVar3 = FUN_00414520(local_40);
            (**(code **)(*param_1 + 0x60))(param_1,puVar4,uVar3,&local_41);
            if (local_41 < 0xa0) {
              bVar7 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)local_41 >> 3] >> (local_41 & 7) &
                      1) != 0;
            }
            else {
              bVar7 = false;
            }
            if (bVar7) {
              (**(code **)*puVar4)(puVar4,&local_60);
              FUN_00957a00(param_1,param_2,local_60,local_40[0]);
            }
            else {
              local_61 = 0;
            }
          }
        }
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_004145c0(&local_60,3);
  FUN_00414520(local_40);
  return local_61;
}

