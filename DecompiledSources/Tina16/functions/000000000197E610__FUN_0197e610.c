/* Ghidra address: 0197e610 */
/* Ghidra symbol: FUN_0197e610 */


void FUN_0197e610(longlong *param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  if (param_2 != 0) {
    lVar3 = FUN_0197d8d0(&DAT_0194c488,1);
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_2 + 0x18);
    iVar8 = *(int *)(*(longlong *)(param_2 + 8) + 0x10);
    uVar7 = 0;
    if (-1 < iVar8 + -1) {
      do {
        uVar6 = (ulonglong)uVar7;
        bVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x10),uVar6);
        if (param_4 < 8) {
          bVar9 = ((byte)((int)CONCAT71((int7)(uVar6 >> 8),1) << (param_4 & 0x1f)) & bVar1) != 0;
        }
        else {
          bVar9 = false;
        }
        if (bVar9) {
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 8),uVar7);
          iVar2 = FUN_004aeba0(param_1[0xf],lVar4);
          if (iVar2 == -1) {
            puVar5 = (undefined8 *)(**(code **)(lVar4 + -0x30))(lVar4);
            (**(code **)*puVar5)(puVar5,0xff,lVar4,param_3);
            FUN_004ae7e0(param_1[0xf],puVar5);
            puVar5[0xb] = param_1;
          }
          else {
            puVar5 = (undefined8 *)FUN_004aeac0(param_1[0xf],iVar2);
          }
          FUN_004ae7e0(*(undefined8 *)(lVar3 + 0x20),puVar5);
        }
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    FUN_00410ae0(*(undefined8 *)(lVar3 + 0x28),local_40);
    (**(code **)(*param_1 + 0x80))(param_1,local_40[0],lVar3);
  }
  FUN_00414480(local_40);
  return;
}

