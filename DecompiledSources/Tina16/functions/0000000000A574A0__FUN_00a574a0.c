/* Ghidra address: 00a574a0 */
/* Ghidra symbol: FUN_00a574a0 */


void FUN_00a574a0(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30 [2];
  
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_30[0] = 0;
  uVar5 = 0x16;
  lVar6 = param_1 + 0x150;
  puVar7 = (undefined4 *)(param_4 + 0x38);
  do {
    cVar2 = FUN_0046c390(lVar6);
    if (cVar2 == '\0') {
      uVar1 = *(ushort *)(param_1 + -0xc0 + uVar5 * 0x18);
      if (uVar1 < 0x20) {
        bVar8 = (1 << ((byte)uVar1 & 0x1f) & 0x1f000cU) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        FUN_00468530(&local_48,0xff439eb2,0xfffffffffffffffc);
        cVar2 = FUN_0046f320(lVar6,&local_48);
        if (cVar2 == '\0') {
          uVar3 = FUN_00462650(lVar6);
          *puVar7 = uVar3;
        }
        else {
          *puVar7 = 0xffffffff;
        }
      }
      else {
        *puVar7 = 0xffffffff;
      }
    }
    else {
      FUN_00467e90(local_30,lVar6);
      uVar3 = FUN_00a61c40(local_30[0],0,0xffffff9c,param_2,param_3,0);
      *puVar7 = uVar3;
    }
    bVar4 = (char)uVar5 + 1;
    uVar5 = (ulonglong)bVar4;
    puVar7 = puVar7 + 1;
    lVar6 = lVar6 + 0x18;
  } while (bVar4 != 0x1a);
  FUN_00460ba0(&local_48);
  FUN_00414480(local_30);
  return;
}

