/* Ghidra address: 01bb67d0 */
/* Ghidra symbol: FUN_01bb67d0 */


void FUN_01bb67d0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  FUN_004b5390(*(undefined8 *)(param_1 + 0x6e8),&local_20,
               param_4 - *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4c0));
  if (local_20 == 0) {
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,local_30,0x85a);
    FUN_016fe2a0(local_30[0],0,0);
  }
  else {
    iVar2 = FUN_004170c0(&DAT_01bb6a94,local_20,1);
    iVar3 = FUN_004170c0(&LAB_01bb6aa4,local_20,1);
    iVar4 = FUN_004170c0(&DAT_01bb6a94,local_20,1);
    FUN_00416dc0(&local_20,local_20,iVar2 + 1,(iVar3 - iVar4) + -1);
    plVar6 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x30))
                       (*(longlong **)(param_1 + 0x6e8),
                        param_4 - *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4c0));
    uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    cVar1 = FUN_01d01970(plVar6);
    if (cVar1 == '\0') {
      cVar1 = FUN_01d3d620(uVar5);
      if (cVar1 == '\0') {
        cVar1 = FUN_01d42330(uVar5);
        if (cVar1 == '\0') {
          cVar1 = FUN_01d04d40(plVar6);
          if ((cVar1 == '\0') || ((char)plVar6[0x34] != '\x02')) {
            cVar1 = FUN_01d421b0(uVar5);
            if (cVar1 == '\0') {
              cVar1 = FUN_01d42220(uVar5);
              if (cVar1 == '\0') {
                cVar1 = FUN_01d422d0(uVar5);
                if (cVar1 == '\0') {
                  cVar1 = FUN_01d42370(uVar5);
                  if (cVar1 == '\0') {
                    FUN_00ed0470(4,local_20,*param_5,*(undefined8 *)PTR_DAT_02004008);
                  }
                  else {
                    FUN_00ed0470(5,local_20,*param_5,*(undefined8 *)PTR_DAT_02004008);
                  }
                }
                else {
                  FUN_00ed0470(2,local_20,*param_5,*(undefined8 *)PTR_DAT_02004008);
                }
              }
              else {
                FUN_00ed0470(1,local_20,*param_5,*(undefined8 *)PTR_DAT_02004008);
              }
            }
            else {
              FUN_00ed0470(3,local_20,*param_5,*(undefined8 *)PTR_DAT_02004008);
            }
          }
          else {
            FUN_00ed0470(0,local_20,*param_5,*(undefined8 *)PTR_DAT_02004008);
          }
          goto code_r0x01bb6a44;
        }
      }
    }
    FUN_00ec4510(local_20,*param_5,*(undefined8 *)PTR_DAT_02004008);
  }
code_r0x01bb6a44:
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

