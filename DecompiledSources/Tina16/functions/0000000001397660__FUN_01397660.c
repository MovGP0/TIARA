/* Ghidra address: 01397660 */
/* Ghidra symbol: FUN_01397660 */


void FUN_01397660(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  undefined1 local_258 [259];
  undefined1 local_155;
  undefined7 local_154;
  undefined1 uStack_14d;
  undefined7 local_14c;
  undefined1 uStack_145;
  undefined7 uStack_144;
  undefined8 uStack_13d;
  undefined4 uStack_135;
  undefined1 uStack_131;
  undefined1 local_130 [256];
  longlong local_30 [2];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar2 = (**(code **)(*param_1 + 0x2d0))(param_1,0,local_30);
  if (cVar2 == '\x04') {
    puVar1 = *(undefined8 **)(local_30[0] + 0x26);
    local_155 = (undefined1)*puVar1;
    local_154 = (undefined7)((ulonglong)*puVar1 >> 8);
    uStack_14d = (undefined1)puVar1[1];
    local_14c = (undefined7)((ulonglong)puVar1[1] >> 8);
    uStack_145 = (undefined1)puVar1[2];
    uStack_144 = (undefined7)((ulonglong)puVar1[2] >> 8);
    uStack_13d = puVar1[3];
    uStack_135 = *(undefined4 *)(puVar1 + 4);
    uStack_131 = *(undefined1 *)((longlong)puVar1 + 0x24);
    FUN_00416910(local_258,local_res10[0],0xff);
    FUN_00415020(local_30[0],local_258,0x14);
  }
  else if (cVar2 == '\a') {
    puVar1 = *(undefined8 **)(local_30[0] + 0x26);
    local_155 = (undefined1)*puVar1;
    local_154 = (undefined7)((ulonglong)*puVar1 >> 8);
    uStack_14d = (undefined1)puVar1[1];
    local_14c = (undefined7)((ulonglong)puVar1[1] >> 8);
    uStack_145 = (undefined1)puVar1[2];
    uStack_144 = (undefined7)((ulonglong)puVar1[2] >> 8);
    uStack_13d = puVar1[3];
    uStack_135 = *(undefined4 *)(puVar1 + 4);
    uStack_131 = *(undefined1 *)((longlong)puVar1 + 0x24);
    FUN_00416910(local_258,local_res10[0],0xff);
    FUN_00415020(local_30[0],local_258,0x14);
  }
  lVar3 = FUN_0172bd70(&PTR_FUN_01729478,1,param_1,0,*(undefined8 *)PTR_DAT_02001f18,1);
  FUN_0172cc40(lVar3,*(undefined2 *)(lVar3 + 0x16a),uStack_135._1_2_,CONCAT17(uStack_14d,local_154),
               CONCAT17(uStack_145,local_14c),local_130,0xff);
  FUN_00410f20(lVar3);
  FUN_00414480(local_res10);
  return;
}

