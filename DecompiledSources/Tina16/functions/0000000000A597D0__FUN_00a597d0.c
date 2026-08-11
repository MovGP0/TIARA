/* Ghidra address: 00a597d0 */
/* Ghidra symbol: FUN_00a597d0 */


undefined1 FUN_00a597d0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_398 [32];
  longlong local_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  longlong local_360 [2];
  char acStack_350 [4];
  int local_34c;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  longlong local_330;
  char local_328;
  
  local_360[0] = 0;
  local_378 = param_1;
  uStack_370._4_4_ = param_2;
  FUN_00417600(&local_348,&DAT_00a57cf8,0x14);
  uStack_368._3_1_ = 0;
  (**(code **)(**(longlong **)(local_378 + 0x1b8) + 0x18))
            (*(longlong **)(local_378 + 0x1b8),local_360,uStack_370._4_4_);
  FUN_00a591b0(auStack_398,local_360[0]);
  iVar2 = FUN_00416db0(local_348,*(undefined8 *)(local_378 + 0x1c0));
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(local_340,*(undefined8 *)(local_378 + 0x1c8));
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(local_330,*(undefined8 *)(local_378 + 0x1d8));
      if (iVar2 != 0) goto LAB_00a59ab2;
    }
  }
  uStack_368._3_1_ = 1;
  if (1 < local_34c) {
    iVar2 = FUN_00416db0(local_348,*(undefined8 *)(local_378 + 0x1c0));
    if ((iVar2 == 0) || (local_348 == 0)) {
      iVar2 = FUN_00416db0(local_340,*(undefined8 *)(local_378 + 0x1c8));
      if ((iVar2 == 0) || (local_340 == 0)) {
        iVar2 = FUN_00416db0(local_338,*(undefined8 *)(local_378 + 0x1d0));
        if ((iVar2 == 0) || (local_338 == 0)) {
          iVar2 = FUN_00416db0(local_330,*(undefined8 *)(local_378 + 0x1d8));
          if (iVar2 != 0) {
            if (local_330 != 0) goto LAB_00a59ab2;
            iVar2 = FUN_00416db0(*(undefined8 *)(local_378 + 0x1d8),L"link");
            if (iVar2 != 0) goto LAB_00a59ab2;
          }
          iVar2 = 2;
          cVar6 = local_328;
          for (uStack_368._4_4_ = *(int *)(*(longlong *)(local_378 + 0x1b0) + 0xe0);
              (iVar2 <= local_34c && (0 < uStack_368._4_4_));
              uStack_368._4_4_ = uStack_368._4_4_ + -1) {
            lVar4 = FUN_00a5eab0(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(local_378 + 0x1b0) + 0x90) + 0x10),
                                 uStack_368._4_4_);
            iVar3 = FUN_00416db0((&uStack_370)[(longlong)iVar2 * 5],*(undefined8 *)(lVar4 + 0x38));
            if ((iVar3 == 0) || ((&uStack_370)[(longlong)iVar2 * 5] == 0)) {
              lVar7 = (longlong)iVar2;
              iVar3 = FUN_00416db0((&uStack_368)[lVar7 * 5],*(undefined8 *)(lVar4 + 0x40));
              if ((iVar3 != 0) && ((&uStack_368)[lVar7 * 5] != 0)) {
                cVar1 = FUN_00a59680(auStack_398,(&uStack_368)[lVar7 * 5],
                                     *(undefined8 *)(lVar4 + 0x40));
                if (cVar1 == '\0') goto LAB_00a59a91;
              }
              iVar3 = FUN_00416db0(local_360[(longlong)iVar2 * 5],*(undefined8 *)(lVar4 + 0x48));
              if ((iVar3 != 0) && (local_360[(longlong)iVar2 * 5] != 0)) goto LAB_00a59a91;
              iVar3 = FUN_00416db0(local_360[(longlong)iVar2 * 5 + 1],*(undefined8 *)(lVar4 + 0x50))
              ;
              if ((iVar3 != 0) && (local_360[(longlong)iVar2 * 5 + 1] != 0)) goto LAB_00a59a91;
              if (iVar2 == local_34c) {
                uVar5 = (**(code **)(**(longlong **)(local_378 + 0x1b8) + 0x30))
                                  (*(longlong **)(local_378 + 0x1b8),uStack_370._4_4_);
                uVar5 = FUN_004113f0(uVar5,&PTR_FUN_00a4ffc0);
                FUN_00a580e0(local_378,uVar5,0);
              }
              cVar6 = acStack_350[(longlong)iVar2 * 0x28];
              iVar2 = iVar2 + 1;
            }
            else {
LAB_00a59a91:
              if (cVar6 != '\0') break;
            }
          }
        }
      }
    }
  }
LAB_00a59ab2:
  FUN_00414480(local_360);
  FUN_00417840(&local_348,&DAT_00a57cf8,0x14);
  return uStack_368._3_1_;
}

