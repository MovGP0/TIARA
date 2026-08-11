/* Ghidra address: 01150aa0 */
/* Ghidra symbol: FUN_01150aa0 */


void FUN_01150aa0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_4b;
  undefined1 local_4a;
  char local_49;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_30 = *(undefined8 **)(param_2 + 0x50);
  iVar2 = FUN_01cfd2d0();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      puVar3 = (undefined8 *)
               FUN_01b05ad0(param_2,CONCAT31((int3)((uint)iVar4 >> 8),(char)iVar4 + '\x01'),0,
                            &local_49,&local_4a,&local_4b);
      if (local_49 == '\x06') {
        if ((*(float *)(puVar3 + 2) != 0.0) ||
           (cVar1 = FUN_0114eb00(*(undefined1 *)(puVar3 + 3),puVar3[4]), cVar1 != '\0')) {
          *puVar3 = *local_30;
          FUN_00b909d0(&local_30,8);
        }
      }
      else if ((local_49 == '\a') && (puVar3[0x28] != 0)) {
        local_40 = *(undefined8 *)(puVar3[0x28] + 0x10);
        local_48 = *(undefined8 **)(*(longlong *)((longlong)puVar3 + 0x26) + 9);
        local_38 = *(undefined8 **)(*(longlong *)((longlong)puVar3 + 0x26) + 0x11);
        for (uVar5 = (uint)*(byte *)(puVar3[0x28] + 0x18); uVar5 != 0; uVar5 = uVar5 - 1) {
          cVar1 = FUN_0114eb60(local_40);
          if (cVar1 != '\0') {
            *local_48 = *local_38;
            FUN_00b909d0(&local_38,8);
          }
          FUN_00b909d0(&local_48,8);
          FUN_00b909d0(&local_40,0x14);
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

