namespace SDK {
 
int UWorlds = 0x12BA7050;
int Fname = 0x12D6ABC0;
int Gameinstance = 0x1D8; // Class Engine.World -&gt; struct UGameInstance* OwningGameInstance;
int LocalPlayers = 0x38; // Class Engine.GameInstance -&gt; struct TArray&lt;struct ULocalPlayer*&gt; LocalPlayers;
int PlayerController = 0x30; // Class Engine.Player - &gt; struct APlayerController* PlayerController;
int LocalPawn = 0x338; // Class Engine.PlayerController - &gt; struct APawn* AcknowledgedPawn;
int PlayerState = 0x2b0; // Class Engine.Pawn - &gt; struct APlayerState* PlayerState;
int RootComponet = 0x198; //Class Engine.Actor -&gt; struct USceneComponent* RootComponent;
int GameState = 0x160; // Class Engine.World -&gt; struct AGameStateBase* GameState;
int PersistentLevel = 0x30; // Class Engine.World -&gt; struct ULevel* PersistentLevel;
int Velocity = 0x168; // Class Engine.SceneComponent -&gt; struct FVector ComponentVelocity;
int GunName = 0x98;
int IsDBNO = 0x982; // FortniteGameClass.AFortPawn -&gt; char bIsDBNO : 1;
int IsDying = 0x758; // FortniteGameClass.AFortPawn -&gt; char bIsDying : 1;
int Cameramanager = 0x348; // Class Engine.PlayerController -&gt; struct APlayerCameraManager* PlayerCameraManager;
int Mesh = 0x318; // Class Engine.Character struct USkeletalMeshComponent* Mesh;
int Revivefromdbnotime = 0x4BF8; // FortniteGameClass.AFortPlayerPawnAthena - &gt; float ReviveFromDBNOTime;
int TeamId = 0x1211; // FortniteGame.FortPlayerStateAthena - &gt; char TeamIndex;
int pawn_private = 0x308; // Class Engine.PlayerState -&gt; struct APawn* PawnPrivate;
int bIsABot = 0x29A; // Class Engine.PlayerState -&gt; char bIsABot : 1;
int RelativeLocation = 0x120; // Class Engine.SceneComponent -&gt; struct FVector RelativeLocation;
int PlayerArray = 0x2a8; // Class Engine.GameStateBase -&gt; struct TArray&lt;struct APlayerState*&gt; PlayerArray;
int DefaultFOV = 0x2a4; //Engine_classes.APlayerCameraManager - &gt; DefaultFOV;
int AActor = 0xA0;
int ActorCount = 0xA8;
int ComponetToWorld = 0x1c0;
int BoneArray = 0x5B8;
int LAST_SUMBIT_TIME = 0x2E8;
int LAST_SUMBIT_TIME_ON_SCREEN = 0x2F0;
int Levels = 0x178; //// Class Engine.World -&gt; struct TArray&lt;struct ULevel*&gt; Levels;
int CachedWorldOrLocalSpaceBounds = 0x7d0; //// Class Engine.SkinnedMeshComponent -&gt; struct FBoxSphereBounds CachedWorldOrLocalSpaceBounds;
int CUSTOMTIMEDILATION = 0x68; //Class Engine.Actor -&gt; float CustomTimeDilation
 
namespace FortWeapon {
 
int bTraceThroughWorld = 0xe41; // Class FortniteGame.FortWeapon -&gt; char bTraceThroughWorld : 1;
int CurrentWeapons = 0xA68;// Class FortniteGame.FortPawn -&gt; struct AFortWeapon* CurrentWeapon;
int WeaponData = 0x500; // Class FortniteGame.FortWeapon -&gt; struct UFortWeaponItemDefinition* WeaponData;
int ItemName = 0x40; // Class ItemizationCoreRuntime.ItemDefinitionBase -&gt; struct FText ItemName;
int Tier = 0x9b; // Class FortniteGame.FortItemDefinition - &gt; enum class EFortRarity Rarity
int bIsReloadingWeapon = 0x388; // Class FortniteGame.AFortWeapon -&gt; bool bIsReloadingWeapon;
int AmmoCount = 0xedc; // Class FortniteGame.AActor -&gt; int32_t AmmoCount;
}
namespace Character {
int bIsCrouched = 0x45c; // Class Engine.Character -&gt; char bIsCrouched : 1;
int PawnMaterials_ALL = 0x5C80; // BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C -&gt; struct TArray&lt;struct UMaterialInstanceDynamic*&gt; PawnMaterials_ALL;
int Parent = 0x110; // Class Engine.MaterialInstance -&gt; struct UMaterialInterface* Parent;
int Wireframe = 0x1c0; // Class Engine.Material -&gt; char Wireframe : 1;
}
 
namespace EFortPickupSpawnSource {
int SpawnSourceOverride = 0x780; // Class FortniteGame.FortPawn -&gt; enum class EFortPickupSpawnSource SpawnSourceOverride;
int PickupSpawnSource = 0x591; PickupSpawnSource;
}
namespace FortPawn {
 
int bIsJumping = 0xa60; 
int bIsSliding = 0x75b; 
int TargetedFortPawn = 0x18A8;
}
}