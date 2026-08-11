/* Ghidra address: 0095a6a0 */
/* Ghidra symbol: FUN_0095a6a0 */


void FUN_0095a6a0(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  *param_3 = 1;
  *param_2 = 1;
  puVar6 = param_3;
  iVar2 = (**(code **)**(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x38))();
  iVar8 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x38);
      lVar4 = (**(code **)(*plVar7 + 0x28))(plVar7,iVar8);
      FUN_004168b0(local_40,*(undefined8 *)(lVar4 + 0x58));
      cVar1 = FUN_008fc3c0(local_40[0]);
      if (cVar1 == '\0') {
        plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x38);
        puVar5 = (undefined1 *)(**(code **)(*plVar7 + 0x28))(plVar7,iVar8);
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                          (*(longlong **)(param_1 + 0x70),
                           CONCAT71((int7)((ulonglong)puVar6 >> 8),7) & 0xffffffff,puVar5);
        if (cVar1 == '\0') {
          *param_2 = 0;
          *param_3 = 0;
          break;
        }
      }
      else {
        plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x38);
        lVar4 = (**(code **)(*plVar7 + 0x28))(plVar7,iVar8);
        puVar6 = (undefined1 *)0x0;
        iVar3 = FUN_00417170(&DAT_0095aa1c,*(undefined8 *)(lVar4 + 0x58),1);
        puVar5 = puVar6;
        if (0 < iVar3) {
          plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x38);
          puVar5 = (undefined1 *)(**(code **)(*plVar7 + 0x28))(plVar7,iVar8);
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                            (*(longlong **)(param_1 + 0x70),
                             CONCAT71((int7)((ulonglong)puVar6 >> 8),6) & 0xffffffff,puVar5,0);
          if (cVar1 == '\0') {
            *param_2 = 0;
            *param_3 = 0;
            break;
          }
        }
      }
      plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x38);
      lVar4 = (**(code **)(*plVar7 + 0x28))(plVar7,iVar8);
      iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x30) + 0x38))();
      uVar9 = 0;
      if (-1 < iVar3 + -1) {
        do {
          plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x38);
          lVar4 = (**(code **)(*plVar7 + 0x28))(plVar7,iVar8);
          puVar5 = (undefined1 *)(ulonglong)uVar9;
          (**(code **)(**(longlong **)(lVar4 + 0x30) + 0x28))
                    (*(longlong **)(lVar4 + 0x30),&local_48,puVar5);
          cVar1 = FUN_009586d0(*(undefined8 *)(param_1 + 0x70),local_48);
          if (cVar1 != '\0') {
            plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x38);
            puVar6 = (undefined1 *)(**(code **)(*plVar7 + 0x28))(plVar7,iVar8);
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                              (*(longlong **)(param_1 + 0x70),
                               CONCAT71((int7)((ulonglong)puVar5 >> 8),8) & 0xffffffff,puVar6);
            puVar5 = puVar6;
            if (cVar1 == '\0') {
              *param_2 = 0;
              *param_3 = 0;
              goto LAB_0095a9cb;
            }
            break;
          }
          uVar9 = uVar9 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x38);
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x28))(plVar7,iVar8);
      cVar1 = (**(code **)(*plVar7 + 0x10))(plVar7);
      puVar6 = puVar5;
      if (cVar1 == '\0') {
        plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x38);
        lVar4 = (**(code **)(*plVar7 + 0x28))(plVar7,iVar8);
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x40))
                          (*(longlong **)(param_1 + 0x70),*(undefined8 *)(lVar4 + 0x38));
        puVar6 = puVar5;
        if (lVar4 == 0) {
          *param_2 = 0;
          plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x38);
          puVar6 = (undefined1 *)(**(code **)(*plVar7 + 0x28))(plVar7,iVar8);
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                            (*(longlong **)(param_1 + 0x70),
                             CONCAT71((int7)((ulonglong)puVar5 >> 8),0x2a) & 0xffffffff,puVar6);
          if (cVar1 == '\0') {
            *param_3 = 0;
            break;
          }
        }
      }
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_0095a9cb:
  FUN_00414520(&local_48);
  FUN_00414480(local_40);
  return;
}

